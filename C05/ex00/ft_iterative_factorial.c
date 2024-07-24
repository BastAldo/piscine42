/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:23:35 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/24 12:05:53 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	n;

	n = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		n = n * i;
		i++;
	}
	return (n);
}
