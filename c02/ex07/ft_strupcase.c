/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 00:39:36 by aldo              #+#    #+#             */
/*   Updated: 2024/07/19 00:43:50 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//TODO: finire funzione che trasforma lettere in maiuscolo
int ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'A'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
