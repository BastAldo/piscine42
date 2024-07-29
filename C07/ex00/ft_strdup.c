/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:51:56 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/29 19:56:14 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*dest;
	long int	i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc((i + 1) * sizeof(*dest));
	if (dest == NULL)
		return (NULL);
	while (i)
	{
		i--;
		dest[i] = src[i];
	}
	return (dest);
}
