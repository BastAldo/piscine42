/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 22:41:28 by aldpanza          #+#    #+#             */
/*   Updated: 2024/08/01 14:52:01 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_check_base(char *base)
{
	int	i;
	int	y;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		y = i + 1;
		while (base[y])
		{
			if (base[y] == base[i])
				return (0);
			y++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	long tmp;
	
	base_len = ft_check_base(base);
	if (!base_len)
		return ;
	if (nbr == -2147483648)
	{
		tmp = nbr * -1;
		ft_putnbr_base((int)tmp / base_len, base);
		ft_putnbr_base((int)tmp % base_len, base);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < base_len)
	{
		write(1, &(base[nbr]), 1);
		return ;
	}
	ft_putnbr_base((int)nbr / base_len, base);
	ft_putnbr_base((int)nbr % base_len, base);
}
