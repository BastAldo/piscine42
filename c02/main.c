/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 08:32:09 by aldo              #+#    #+#             */
/*   Updated: 2024/07/19 10:42:12 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[11] = "aldo!=+-!@";
	char	*i;
	
	i = ft_strupcase(str);
	printf("return %s", i);
	return (0);
}
