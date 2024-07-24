/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:54:03 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/24 14:59:05 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tot;
	
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (11);
	while (power > 0)
	{
		tot = tot * power--;
	}
	return (tot);
}