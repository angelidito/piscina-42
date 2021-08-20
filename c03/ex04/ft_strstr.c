/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:27:44 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/20 13:04:47 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	j = 0;
	while (str[i] != '\0' && *(to_find + j) != '\0')
	{
		if (to_find[j] == '\0')
			return (&str[i - j]);
		else if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (0x0);
	// 	unsigned int	i;
	// unsigned int	j;

	// i = 0;
	// j = 0;
	// while (*(str + i) && *(to_find + j) != '\0')
	// {
	// 	if (*(str + i) == *(to_find + j))
	// 		j++;
	// 	else
	// 		j = 0;
	// 	i++;
	// }
	// if (*(to_find + j) != '\0')
	// 	return (0x0);
	// return (str + i - j);
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
	test(t++, "hola que tal", "ta");
	test(t++, "hola que tal", "que");
	test(t++, "hola que\0 tal", "que");
	test(t++, "hola que tal", "");
	test(t++, "hola que tal", "\0");
}
