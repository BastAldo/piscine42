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

int	ft_pstrlen(int size, char **strs, char *sep)
{
	int	strlen;
	int	i;
	int	y;

	i = 1;
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
	strlen += (i * (size-2));
	return (strlen);
}

char	*ft_sjoin(int size, char *strjoin, char **strs, char *sep)
{
	int	i;
	int	y;
	int	order;

	i = 1;
	y = 0;
	order = y;
	while (i < size)
	{
		while (strs[i][y])
		{
			strjoin[order] = strs[i][y];
			y++;
			order++;
		}
		y = 0;
		while (sep[y++])
		{
			strjoin[order++] = sep[i];
		}
		y = 0;
		i++;
	}
	strjoin[order] = 0;
	return(strjoin);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strjoin;
	int	strlen;

	if (!size)
	{
		return (NULL);
	}
	strlen = ft_pstrlen(size, strs, sep) + 1;
	strjoin = (char *)malloc(strlen * sizeof(char));
	strjoin = ft_sjoin(size, strjoin, strs, sep);
	return (strjoin);
}

//int	main(int argc, char **argv)
//{
//	char	*r;
//
//	r = ft_strjoin(argc, argv,"--");
//	return (0);
//}
