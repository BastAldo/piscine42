/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:05:44 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/23 18:35:04 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	len_d;
	unsigned int	len_s;

	i = ft_strlen(dest);
	y = 0;
	len_d = i;
	len_s = ft_strlen(src);
	if (size < 1)
		return (len_s + size);
	while (src[y] && i < size - 1)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = 0;
	if (size < len_d)
		return (len_s + size);
	else
		return (len_d + len_s);
}
