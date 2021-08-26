/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:02:44 by jpineiro          #+#    #+#             */
/*   Updated: 2021/08/26 17:06:00 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{	
	int				total_size;
	unsigned int	i;

	i = 0;
	total_size = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[total_size++] = src[i];
		i++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	 while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

#include <stdio.h>
#include <string.h>


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
