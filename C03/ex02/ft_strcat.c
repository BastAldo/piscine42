/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:43:51 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/24 12:31:43 by aldpanza         ###   ########.fr       */
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
