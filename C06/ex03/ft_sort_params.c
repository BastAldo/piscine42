/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:20:11 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/25 23:40:51 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char *a, char *b)
{
	char	*t;

	t = a;
	a = b;
	b = t;
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	p_size;
	int	i;
	int	y;

	i = 0;
	y = 0;
	tab++;
	while (y < size)
	{
		p_size = size - y;
		while (i < p_size -1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) < 0)
			{
				ft_swap(tab[i], tab[i + 1]);
			}
			i++;
		}
		i = 0;
		y++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	ft_sort_int_tab(argv, i);
	while (i >= 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i--;
	}
	return (argc);
}
