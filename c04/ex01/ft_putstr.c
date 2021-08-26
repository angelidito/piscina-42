/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:35:40 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 02:42:44 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

// void	test(int test, char s1[])
// {
// 	printf("\nTest %d:\n", test);
// 	ft_putstr(s1);
// 	printf("\n");
// 	printf("%s\n", s1);
// 	printf("\n");
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
// 	test(t++, "Hola qu\ntal");
// 	test(t++, "Hola \te tal");
// 	test(t++, "Hola çue tal");
// }
