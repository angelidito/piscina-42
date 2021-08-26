/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 13:52:02 by mkreivi           #+#    #+#             */
/*   Updated: 2021/08/26 16:23:56 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
	{
		return (str);
	}
	while (str[i] && to_find[j])
	{
		j = 0;
		while (str[i] == to_find[j] && to_find[j] != '\0')
		{
			i++;
			j++;
		}
		i = i - j + 1;
	}
	if (to_find[j] == '\0')
		return (&str[i - 1]);
	else
		return (0);
}
#include <string.h>
#include <stdio.h>

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
		printf("s1: %s\ns2: %s\n", s1, s2);
		printf("Expected: ");
		printf("%c", expected[0]);
		printf("\nObtained: ");
		printf("%c", obtained[0]);
		printf("\n\n");
	}
	else
		printf("Test %d: OK!\n", test);
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
}
