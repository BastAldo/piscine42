/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:17:18 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/17 14:49:17 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	l;

	l = 'z';
	while (l >= 'a')
	{
		ft_putchar(l);
		l--;
	}
}
