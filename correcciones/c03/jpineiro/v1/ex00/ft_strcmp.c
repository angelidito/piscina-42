/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:52:29 by jpineiro          #+#    #+#             */
/*   Updated: 2021/08/26 19:47:10 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != 0 && *(s2 + i) != 0)
	{
		if (!(s1[i] == s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	qwhile (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}
#include <stdio.h>
#include <string.h>

void	test(int test, char s1[], char s2[])
{
	int	expected;
	int	obtained;

	expected = strcmp(&s1[0], &s2[0]);
	obtained = ft_strcmp(&s1[0], &s2[0]);
	if (obtained != expected)
	{
		printf("\nTest %d: Error!\n", test);
		printf("s1: %s\ns2: %s\n", s1, s2);
		printf("Expected: %d\n", expected);
		printf("Obtained: %d\n", obtained);
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
	test(t++, "hola", "hola");
	test(t++, "hola", "hol?");
	test(t++, "hola", "ho??");
	test(t++, "hol\0", "hol\0");
	test(t++, "ho\0a", "ho\0a");
	test(t++, "ho\0a", "hol\0");
	test(t++, "\0ola", "\0ola");
	test(t++, "ho\tla!", "ho\tla!");
	test(t++, "ho\tla!", "hola!");
}
