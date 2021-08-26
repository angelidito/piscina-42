/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:48:52 by camoreno          #+#    #+#             */
/*   Updated: 2021/08/25 18:08:03 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (!n)
		return (0);
	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	else
		return (0);
}

void	test(int test, char s1[], char s2[], int n)
{
	int	expected;
	int	obtained;

	expected = strncmp(&s1[0], &s2[0], n);
	obtained = ft_strncmp(&s1[0], &s2[0], n);
	if (obtained != expected)
	{
		printf("\nTest %d: Error!\n", test);
		printf("s1: %s\ns2: %s\n", s1, s2);
		printf("Reultado expected: %d\n", expected);
		printf("Reultado obtained: %d\n", obtained);
		printf("\n");
	}
	else
	{
		printf("Test %d: OK!\n", test);
	}
}

int	main(void)
{
	int	t;

	t = 1;
	test(t++, "hola", "hola", 10);
	test(t++, "hola", "hol?", 10);
	test(t++, "hola", "ho??", 10);
	test(t++, "hol\0", "hol\0", 10);
	test(t++, "ho\0a", "ho\0a", 10);
	test(t++, "ho\0a", "hol\0", 10);
	test(t++, "\0ola", "\0ola", 10);
	test(t++, "ho\tla!", "ho\tla!", 10);
	test(t++, "ho\tla!", "hola!", 10);
	test(t++, "hol\0a!", "hol\0a!", 10);
	test(t++, "ho\tla!", "ho\tla!", 10);
	test(t++, "ho\tla!", "hola!", 10);
	test(t++, "\0\0\0\0", "\0\0\0\0", 10);
	test(t++, "hola\0\0\0\0", "hola\0\0\0\0", 10);
	test(t++, "hola\0\0\0\0", "hol\0\0\0\0", 10);
	test(t++, "hola", "hola", 6);
	test(t++, "hola", "hol?", 6);
	test(t++, "hola", "ho??", 6);
	test(t++, "hol\0", "hol\0", 6);
	test(t++, "ho\0a", "ho\0a", 6);
	test(t++, "ho\0a", "hol\0", 6);
	test(t++, "\0ola", "\0ola", 6);
	test(t++, "ho\tla!", "ho\tla!", 6);
	test(t++, "ho\tla!", "hola!", 6);
	test(t++, "hol\0a!", "hol\0a!", 6);
	test(t++, "ho\tla!", "ho\tla!", 6);
	test(t++, "ho\tla!", "hola!", 6);
	test(t++, "\0\0\0\0", "\0\0\0\0", 6);
	test(t++, "hola\0\0\0\0", "hola\0\0\0\0", 6);
	test(t++, "hola\0\0\0\0", "hol\0\0\0\0", 6);
}
