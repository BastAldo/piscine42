/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:03:50 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/31 14:12:48 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;
	int	diff;

	diff = max - min;
	i = 0;
	if ((diff) > 0)
	{
		range = (int *)malloc(diff * sizeof(int));
		if (range == NULL)
			return (NULL);
		while ((i + min) < max)
		{
			range[i] = i + min;
			i++;
		}
		return (range);
	}
	else
		return (NULL);
}
