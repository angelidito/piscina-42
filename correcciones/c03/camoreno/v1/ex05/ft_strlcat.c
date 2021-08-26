/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:13:37 by camoreno          #+#    #+#             */
/*   Updated: 2021/08/25 18:13:50 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	c;
	unsigned int	a;

	a = 0;
	c = 0;
	j = 0;
	while (dest[a] != '\0')
		a++;
	while (src[c] != '\0')
		c++;
	i = a;
	while (src[j] != '\0' && j < ((size - 1) - a))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (a + c);
}

void	test(int test, char *s1, char *s2, int size)
{
	int		expected;
	int		obtained;
	char	expected_buffer[size];
	char	obtained_buffer[size];

	strcpy(expected_buffer, s1);
	strcpy(obtained_buffer, s1);
	expected = strlcat(expected_buffer, s2, size);
	obtained = ft_strlcat(obtained_buffer, s2, size);
	if (expected != obtained)
	{
		printf("\nTest %d: Error!\n", test);
	printf("Expected int: %d\n", expected);
	printf("Obtained int: %d\n", obtained);
	printf("Expected str: %s\n", expected_buffer);
	printf("Obtained str: %s\n", obtained_buffer);
	printf("\n");
	}
	else
		printf("Test %d: OK!\n", test);
	// printf("s1: %s\ns2: %s\n", s1, s2);
}

int	main(void)
{
	int	t;

	t = 1;
	// test(t++, "", "adios", 3);
	// test(t++, "", "", 3);
	// test(t++, "", "", 0);
	test(t++, "hola", "", 3);
	test(t++, "sdasdfdsafsdfd", "23455253", 6);
// 	test(t++, "", "", 6);
// 	test(t++, "hola", "", 6);
// 	test(t++, "hola", "adios", 3);
// 	test(t++, "hola", "adios", 5);
// 	test(t++, "hola", "hol?", 10);
// 	test(t++, "hola", "ho??", 10);
// 	test(t++, "hol\0", "hol\0", 10);
// 	test(t++, "ho\0a", "ho\0a", 10);
// 	test(t++, "ho\0a", "hol\0", 10);
// 	test(t++, "\0ola", "\0ola", 10);
// 	test(t++, "Hola!", "Adios", 8);
// 	test(t++, "ho\tla!", "hola!", 10);
// 	test(t++, "hol\0a!", "hol\0a!", 10);
// 	test(t++, "ho\tla!", "ho\tla!", 10);
// 	test(t++, "ho\tla!", "hola!", 10);
// 	test(t++, "\0\0\0\0", "\0\0\0\0", 10);
// 	test(t++, "hola\0\0\0\0", "hola\0\0\0\0", 10);
// 	test(t++, "hola\0\0\0\0", "hol\0\0\0\0", 10);
// 	test(t++, "hola", "hola", 6);
// 	test(t++, "hola", "hol?", 6);
// 	test(t++, "hola", "ho??", 6);
// 	test(t++, "hol\0", "hol\0", 6);
// 	test(t++, "ho\0a", "ho\0a", 6);
// 	test(t++, "ho\0a", "hol\0", 6);
// 	test(t++, "\0ola", "\0ola", 6);
// 	test(t++, "ho\tla!", "ho\tla!", 6);
// 	test(t++, "ho\tla!", "hola!", 6);
// 	test(t++, "hol\0a!", "hol\0a!", 6);
// 	test(t++, "ho\tla!", "ho\tla!", 6);
// 	test(t++, "ho\tla!", "hola!", 6);
// 	test(t++, "\0\0\0\0", "\0\0\0\0", 6);
// 	test(t++, "hola\0\0\0\0", "hola\0\0\0\0", 6);
// 	test(t++, "hola\0\0\0\0", "hol\0\0\0\0", 6);
// 	test(t++, "ho\tla!", "ho\tla!", 15);
// 	test(t++, "ho\tla!", "hola!", 15);
// 	test(t++, "\0\0\0\0", "\0\0\0\0", 15);
// 	test(t++, "hola\0\0\0\0", "hola\0\0\0\0", 15);
// 	test(t++, "hola\0\0\0\0", "hol\0\0\0\0", 15);
// 	test(t++, "hola", "hola", 8);
// 	test(t++, "hola", "hol?", 8);
// 	test(t++, "hola", "ho??", 8);
// 	test(t++, "hol\0", "hol\0", 8);
// 	test(t++, "ho\0a", "ho\0a", 8);
// 	test(t++, "ho\0a", "hol\0", 8);
// 	test(t++, "\0ola", "\0ola", 8);
// 	test(t++, "hola", "", 10);
// 	test(t++, "", "hola", 10);
}
