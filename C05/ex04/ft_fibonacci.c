/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:48:41 by aldo              #+#    #+#             */
/*   Updated: 2024/07/24 21:37:54 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TOD: fail test ->  Fibonacci of 5 Expected 5, got 1
int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1 || index == 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
