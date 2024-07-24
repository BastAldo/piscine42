/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldpanza <aldpanza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:54:03 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/24 17:29:48 by aldpanza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	tot;

	tot = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		tot = tot * nb;
		power--;
	}
	return (tot);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#ifndef CONSTANTS_H
#define CONSTANTS_H

#define GREEN "\033[38;5;84m"
#define RED "\033[38;5;197m"
#define GREY "\033[38;5;8m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"
#define putchar custom_putchar

#endif

typedef struct s_test
{
    char *desc;
    int base;
    int power;
    int expected;
} t_test;

int run_tests(t_test *tests, int count);

int main(void)
{
    t_test tests[] = {
        {
            .desc = "Power of 0",
            .base = 10,
            .power = 0,
            .expected = 1,
        },
        {
            .desc = "Power of 1",
            .base = 2,
            .power = 1,
            .expected = 2,
        },
        {
            .desc = "Power of 2",
            .base = 3,
            .power = 2,
            .expected = 9,
        },
        {
            .desc = "Power of a negative number",
            .base = -2,
            .power = 3,
            .expected = -8,
        },
        {
            .desc = "Power of a number with a negative power",
            .base = 2,
            .power = -3,
            .expected = 0,
        },
        {
            .desc = "8 ^ 7",
            .base = 8,
            .power = 7,
            .expected = 2097152,
        },
    };
    int count = sizeof(tests) / sizeof(tests[0]);

    return run_tests(tests, count);
}

int run_tests(t_test *tests, int count)
{
    int i;
    int error = 0;

    for (i = 0; i < count; i++)
    {
        int result = ft_iterative_power(tests[i].base, tests[i].power);

        if (result != tests[i].expected)
        {
            printf("    " RED "[%d] %s Expected %d, got %d\n", i + 1, tests[i].desc, tests[i].expected, result);
            error -= 1;
        }
        else
        {
            printf("  " GREEN CHECKMARK GREY " [%d] %s Expected %d, got %d\n" DEFAULT, i + 1, tests[i].desc, tests[i].expected, result);
        }
    }

    return error;
}
