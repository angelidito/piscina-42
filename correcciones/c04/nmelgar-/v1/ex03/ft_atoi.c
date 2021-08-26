/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:46:56 by nmelgar-          #+#    #+#             */
/*   Updated: 2021/08/25 18:34:08 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	mod;

	i = 0;
	n = 1;
	mod = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		mod = (str[i] - '0') + (mod * 10);
		i++;
	}
	return (mod * n);
}

void	test(int test, char *str)
{
	int	expected;
	int	obtained;

	expected = atoi(str);
	obtained = ft_atoi(str);
	if (expected != obtained)
	{
		printf("\nTest %d: Error ?\n", test);
	}
	else
		printf("Test %d: OK!\n", test);
	printf("     Attention: manual check is needed if there ");
	printf("are more than one consecutive '+' or '-' before numbers\n");
	printf("         str: %s\n", str);
	printf("Obtained int: %d\n", obtained);
	printf("Expected int: %d\n", expected);
	printf("\n");
}

int	main(void)
{
	int	t;

	t = 0;
	test(t++, "");
	test(t++, "0");
	test(t++, "-0");
	test(t++, "-1");
	test(t++, "1");
	test(t++, "+1234");
	test(t++, "+12 34");
	test(t++, "+12-34");
	test(t++, "12 34");
	test(t++, "12a34");
	test(t++, "12ç34");
	test(t++, "a1234");
	test(t++, "  -  1234");
	test(t++, "+-1234");
	test(t++, "-+-1234");
	test(t++, "-+--1234");
	test(t++, "-+-1-234");
	test(t++, "--1");
	test(t++, "---1");
	return (0);
}
