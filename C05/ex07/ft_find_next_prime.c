/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:42:06 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/29 11:28:00 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	while ((c * c) <= nb)
	{
		if ((nb % c) == 0)
			return (0);
		c += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
	{
		return (2);
	}
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
