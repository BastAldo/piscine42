/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 22:50:01 by aldo              #+#    #+#             */
/*   Updated: 2024/07/24 23:27:28 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < (nb / 2))
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	c;

	c = 5;
	if (nb < 2)
		return (0);
	if (nb >= 2 && nb <= 3)
		return (1);
	else if (nb % 2 == 0)
		return (0);
	else if (nb % 3 == 0)
		return (0);
	while (c <= ft_sqrt(nb))
	{
		if ((nb % c) == 0)
			return (0);
		c += 2;
	}
	return (1);
}
