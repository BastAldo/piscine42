/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 17:10:16 by aldpanza          #+#    #+#             */
/*   Updated: 2024/08/03 17:44:47 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_base(char *base)
{
	int	i;
	int	y;
	char	t;

	t = 0;
	y = 1;
	i = 0;
	while (base[i])
	{
		while (base[y + i])
		{
			if (base[i] == base[y + i] || base[i] == '-' || base[i] == '+')
				return (0);
			y++;
		}
		y = 0;
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	return (0);
}

int	main(int argc, char **argv)
{
	int	r;

	if (argc == 2)
		r = ft_check_base(argv[1]);
	return (0);
}
