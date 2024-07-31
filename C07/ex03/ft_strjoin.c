/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:24:21 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/31 14:19:47 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_pstrlen(int size, char **strs, char *sep)
{
	int	strlen;
	int	i;
	int	y;

	i = 0;
	y = 0;
	strlen = 0;
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
	strlen += (i * (size - 1));
	return (strlen);
}

char	*ft_sjoin(int size, char *strjoin, char **strs, char *sep)
{
	int	i;
	int	y;
	int	order;

	i = 0;
	y = 0;
	order = y;
	while (i < size)
	{
		while (strs[i][y])
			strjoin[order++] = strs[i][y++];
		y = 0;
		if (i + 1 < size)
		{
			while (sep[y++])
			{
				strjoin[order++] = sep[i];
			}
		}
		i++;
		y = 0;
	}
	strjoin[order] = 0;
	return (strjoin);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int		strlen;

	if (!size)
	{
		return (NULL);
	}
	strlen = ft_pstrlen(size, strs, sep) + 1;
	strjoin = (char *)malloc(strlen * sizeof(char));
	ft_sjoin(size, strjoin, strs, sep);
	return (strjoin);
}
