/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:48:18 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/17 14:49:12 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers_double_digit(char n)
{
	char	nt;

	nt = (n % 10) + 48;
	n = (n / 10) + 48;
	ft_putchar(n);
	ft_putchar(nt);
	n++;
}

void	ft_print_comb2(void)
{
	char	n1;
	char	n2;

	n1 = 0;
	n2 = 1;
	while (n1 <= 98)
	{
		while (n2 <= 99)
		{
			ft_print_numbers_double_digit(n1);
			write(1, " ", 1);
			ft_print_numbers_double_digit(n2);
			if (!(n1 == 98 && n2 == 99))
				write(1, ", ", 2);
			n2++;
		}
		n1++;
		n2 = n1 + 1;
	}
}
