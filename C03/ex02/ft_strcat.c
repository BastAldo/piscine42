/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:43:51 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/23 18:33:12 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*tdest;
	tdest = dest;
	while (*tdest)
	{
		tdest++;
	}
	while (*src)
	{
		*tdest = *src;
		tdest++;
		src++;
	}
	*tdest = 0;
	return (dest);
}
