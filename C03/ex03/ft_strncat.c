/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:38:54 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/23 15:35:51 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[y] && y < nb)
	{
		dest[i + y] = src[y];
		y++;
	}
	dest[i + y] = 0;
	return (dest);
}
