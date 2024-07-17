/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:33:50 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/17 23:17:34 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//TODO: scorrere la stringa fino a fine stringa \0
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, str[i], 1);
		i++;
	}
}

int	main()
{
	char	stri[4] = "Ciao"; 
}
