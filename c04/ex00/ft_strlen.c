/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:28:08 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 02:43:28 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// void	test(int test, char s1[])
// {
// 	int	expected;
// 	int	obtained;

// 	expected = strlen(s1);
// 	obtained = ft_strlen(s1);
// 	if (obtained != expected)
// 	{
// 		printf("\nTest %d: Error!\n", test);
// 		printf("s1: %s\n", s1);
// 		printf("Expected: %d\n", expected);
// 		printf("Obtained: %d\n", obtained);
// 		printf("\n");
// 	}
// 	else
// 	{
// 		printf("Test %d: OK!\n", test);
// 	}
// }

// int	main(void)
// {
// 	int	t;

// 	t = 1;
// 	test(t++, "Hola que tal");
// 	test(t++, "Hola que t\0");
// 	test(t++, "Hola que \0l");
// 	test(t++, "Hola que\0al");
// 	test(t++, "\0la que tal");
// 	test(t++, "Hola que t\n");
// 	test(t++, "Hola \te tal");
// 	test(t++, "Hola çue tal");
// }
