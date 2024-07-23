/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:10:36 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/23 18:38:29 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	if (!(to_find[i]))
		return (str);
	while (str[i])
	{
		while (str[i + y] == to_find[y])
		{
			y++;
			if (!to_find[y])
				return (&str[i]);
		}
		y = 0;
		i++;
	}
	return (0);
}
