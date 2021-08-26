/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 18:16:04 by camoreno          #+#    #+#             */
/*   Updated: 2021/08/25 18:11:08 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!(*to_find))
		return (str);
	while (str[i])
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
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
