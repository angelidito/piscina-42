/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:26:21 by pescano-          #+#    #+#             */
/*   Updated: 2021/08/23 12:19:00 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		contador;
	char	*a;

	a = str;
	if (*to_find == 0)
		return (str);
	while (*a != 0)
	{
		contador = 0;
		if (*a == to_find[0])
		{
			while (a[contador] == to_find[contador] && to_find[contador])
				contador++;
			if (to_find[contador] == 0)
				return (a);
		}
		a++;
	}
	return (0);
}

void	test(int test, char s1[], char s2[])
{
	char	*expected;
	char	*obtained;

	expected = strstr(&s1[0], &s2[0]);
	obtained = ft_strstr(&s1[0], &s2[0]);
	if (expected[0] != obtained[0]
		&& (expected[1] == obtained[1]))
	{
		printf("\nTest %d: Error!\n", test);
	}
	else
		printf("Test %d: OK!\n", test);
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("Expected: ");
	printf("%c", expected[0]);
	printf("\nObtained: ");
	printf("%c", obtained[0]);
	printf("\n\n");
}

int	main(void)
{
	int	t;

	t = 1;
	test(t++, "hola que tal", "hola");
	test(t++, "hola que tal", "hola ");
	test(t++, "hola que tal", "la que");
	test(t++, "hola que tal", " ");
	test(t++, "hola que tal", "tal");
	test(t++, "hola que tal", "que");
	test(t++, "hola que\0 tal", "que");
	test(t++, "hola que tal", "");
	test(t++, "hola que tal", "\0");
	test(t++, "", "");
}
