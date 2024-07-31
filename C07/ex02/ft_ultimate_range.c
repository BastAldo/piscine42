/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:04:42 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/31 14:12:27 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp_range;
	int	diff;

	diff = max - min;
	i = 0;
	if ((diff) > 0)
	{
		tmp_range = (int *)malloc(diff * sizeof(int));
		if (tmp_range == NULL)
			range = NULL;
		while ((i + min) < max)
		{
			tmp_range[i] = i + min;
			i++;
		}
		*range = tmp_range;
		return (i);
	}
	else
	{
		*range = NULL;
		return (0);
	}
}
