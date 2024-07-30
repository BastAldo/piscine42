/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:24:21 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/30 18:33:00 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	pstrlen(int size, char **strs, char *sep)
{
	int	strlen;
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (i < size)
	{
		while (strs[i][y])
		{
			y++;
		}
		strlen += y;
		y = 0;
		i++;
	}
	i = 0;
	while (sep[i])
	{
		i++;
	}
	strlen += (i * size);
	return (strlen);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{

	char	*strjoin;
	int	strlen;

	if (!size)
	{
		return (NULL);
	}
	strlen = pstrlen(size, strs, sep);
	strjoin = (char *)malloc(strlen * sizeof(char));
	return (NULL); // remove, just for TS
}

int	main(int argc, char **argv)
{
	char	*r;
	r = ft_strjoin(argc, argv,"--");
	return (0);
}
