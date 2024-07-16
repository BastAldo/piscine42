/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:25:27 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/16 12:14:21 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	l;

	l = 97;
	while (l <= 122)
	{
		ft_putchar(l);
		l++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
