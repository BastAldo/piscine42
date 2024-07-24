/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:46:13 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/24 10:46:23 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (!((str[i] >= 9) && (str[i] <= 13))))
		{
			if (str[i] == '-')
				sign = sign * -1;
			else if (str[i] >= '0' && str[i] <= '9')
			{
				number = number * 10 + (str[i] - '0');
			}
			else
				if (number)
					return (number * sign);
		}
		i++;
	}
	return (number * sign);
}
