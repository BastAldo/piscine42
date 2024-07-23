/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:46:13 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/19 12:53:49 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	pos;
	int	sign;
	int	stop;
	int	number;

	number = 0;
	sign = 1;
	i = 0;
	while(str[i])
	{
		if (str[i] != ' ')
		{
			if (str[i] == '-' && str[i] != '+')
			{
				sign *= - sign;
			}
			else if (str[i] >= '0' && str[i] <= '9')
			{
				number *= 10 + (str[i] - '0');
			}
			else
			{
				return (number);
			}
		}
		i++;
	}
	return (number);
}

int	main(void)
{
	ft_atoi("       ----+-+-+-+--0125543560adf");
	return (0);
}

