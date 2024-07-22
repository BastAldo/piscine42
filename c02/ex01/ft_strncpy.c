/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:02:36 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/22 16:59:52 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	
	return (dest);
}

int	main(void)
{
char	dest[50];
char	*dest2;
char	src[] = "aldo";
dest2 = ft_strncpy(dest, src, 8);
write(1, &dest2, 1);
return (0);
}