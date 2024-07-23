/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldo <aldo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 11:46:13 by aldpanza          #+#    #+#             */
/*   Updated: 2024/07/23 20:13:22 by aldo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//TODO: * non è moltiplicazione
int	ft_atoi(char *str)
{
	int	i;
	int	sign;
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
				number == number * 10 + (str[i] - '0');
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

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef CONSTANTS_H
#define CONSTANTS_H

#define GREEN "\033[38;5;84m"
#define RED "\033[38;5;197m"
#define GREY "\033[38;5;8m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"
#define putchar custom_putchar

#endif%

typedef struct s_test
{
    char *desc;
    char *input;
    int expected;
} t_test;

int run_tests(t_test *tests, int count);

int main(void)
{
    t_test tests[] = {
        {
            .desc = "Convert positive integer",
            .input = "12345",
            .expected = 12345,
        },
        {
            .desc = "Convert negative integer",
            .input = "-54321",
            .expected = -54321,
        },
        {
            .desc = "Convert integer with leading spaces",
            .input = "    4567",
            .expected = 4567,
        },
        {
            .desc = "Convert integer with leading plus sign",
            .input = "+6789",
            .expected = 6789,
        },
        {
            .desc = "Convert integer with non-numeric suffix",
            .input = "123abc",
            .expected = 123,
        },
        {
            .desc = "Convert positive zero",
            .input = "0",
            .expected = 0,
        },
        {
            .desc = "Convert negative zero",
            .input = "-0",
            .expected = 0,
        },
        {
            .desc = "Convert integer with leading zeros",
            .input = "000123",
            .expected = 123,
        },
        {
            .desc = "Convert integer with leading zeros and plus sign",
            .input = "+000123",
            .expected = 123,
        },
        {
            .desc = "Convert integer with maximum value for int",
            .input = "2147483647",
            .expected = 2147483647,
        },
        {
            .desc = "Convert integer with minimum value for int",
            .input = "-2147483648",
            .expected = -2147483648,
        },
        {
            .desc = "Convert integer with overflow value",
            .input = "2147483648",
            .expected = -2147483648,
        },
        {
            .desc = "Convert integer with underflow value",
            .input = "-2147483649",
            .expected = 2147483647,
        },
        {
            .desc = "Convert integer with only negative sign",
            .input = "-",
            .expected = 0,
        },
        {
            .desc = "Convert integer with only plus sign",
            .input = "+",
            .expected = 0,
        },
        {
            .desc = "Convert empty string",
            .input = "",
            .expected = 0,
        },
        {
            .desc = "Convert string with only spaces",
            .input = "   ",
            .expected = 0,
        },
        {
            .desc = "Convert string with spaces between digits",
            .input = "12 34",
            .expected = 12,
        },
        {
            .desc = "Convert string with mixed spaces and signs",
            .input = "   +12 34",
            .expected = 12,
        },
        {
            .desc = "Convert string with non-numeric prefix",
            .input = "abc123",
            .expected = 0,
        },
        {
            .desc = "Convert string with non-numeric prefix and sign",
            .input = "+abc123",
            .expected = 0,
        },
        {
            .desc = "Convert string with non-numeric suffix and sign",
            .input = "123abc+",
            .expected = 123,
        },
        {
            .desc = "Convert string with leading whitespaces, sign and zero",
            .input = "   - 0000",
            .expected = 0,
        },
        {
            .desc = "Convert string with multiple signs",
            .input = "--123",
            .expected = 123,
        },
        {
            .desc = "Convert string with multiple signs",
            .input = "++123",
            .expected = 123,
        },
        {
            .desc = "Convert string with invalid signs",
            .input = "+-123",
            .expected = -123,
        },
        {
            .desc = "Convert string with out of range chars",
            .input = "1 2 3 4 5 6 7 8 9 0 a b c d e f g h i j k l m n o p q r s t u v w x y z",
            .expected = 1,
        },
        {
            .desc = "Convert string with multiple space and multiple signs",
            .input = "       ----+-+-+-+--0125543560adf",
            .expected = 1,
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
        int result = ft_atoi(tests[i].input);

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
