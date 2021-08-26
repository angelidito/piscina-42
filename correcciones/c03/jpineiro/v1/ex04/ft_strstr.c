/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:45:37 by jpineiro          #+#    #+#             */
/*   Updated: 2021/08/26 17:06:39 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{	
		j = 0;
		if (to_find[j] == str[i + j])
		{	
			while (to_find[j])
			{	
				if (to_find[j] != str[i + j])
					break ;
				j++;
			}
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
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
