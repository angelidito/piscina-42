/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:13:33 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/19 19:17:51 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i++] = src[j++];
	}
	return (dest);
}

void	test(int test, char s2[], unsigned int nb)
{
	char	s1[100] = "STR_";
	char	*expected;
	char	*obtained;
	char	*ptr;

	expected = strncat(&s1[0], &s2[0], nb);
	obtained = ft_strncat(&s1[0], &s2[0], nb);
	if (strcmp(expected, obtained))
	{
		printf("\nTest %d: Error!\n", test);
		printf("s1: %s\ns2: %s\n", s1, s2);
		printf("Expected: ");
		ptr = &expected[0];
		while (*ptr)
			printf("%c",*ptr++);
		printf("\nObtained: ");
		ptr = &obtained[0];
		while (*ptr)
			printf("%c",*ptr++);
		printf("\n\n");
	}
	else
		printf("Test %d: OK!\n", test);
}

int	main(void)
{
	int	t;

	t = 1;
	test(t++, "hola", 0);
	test(t++, "hola", 1);
	test(t++, "hola", 2);
	test(t++, "hola", 3);
	test(t++, "hola", 4);
	test(t++, "hola", 5);
	test(t++, "hola", 6);
	test(t++, "hol\0", 4);
	test(t++, "ho\0a", 4);
	test(t++, "\0ola", 4);
	test(t++, "ho\tla!", 4);
	test(t++, "hol", 76);
	test(t++, "hol", -76);
}
