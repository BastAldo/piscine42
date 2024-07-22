/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:03:10 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/22 11:25:09 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[50] = "aLd=o p1anZanO";
	char	*i;
	
	i = ft_strcapitalize(str);
	printf("return %s", i);
	return (0);
}
