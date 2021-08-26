/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:59:39 by camoreno          #+#    #+#             */
/*   Updated: 2021/08/25 18:09:21 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
void	test(int test, char s2[])
{
	char	s1[100] = "STR_";
	char	*expected;
	char	*obtained;

	expected = strcat(&s1[0], &s2[0]);
	obtained = ft_strcat(&s1[0], &s2[0]);
	if (strcmp(expected, obtained))
	{
		printf("Test %d: Error!\n", test);
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("Expected: ");
	printf("%s\n", expected);
	printf("Obtained: ");
	printf("%s\n", obtained);
	printf("\n");
	}
	else
		printf("Test %d: OK!\n", test);
}

int	main(void)
{
	int	t;

	t = 1;
	test(t++, "hola");
	test(t++, "hol?");
	test(t++, "ho??");
	test(t++, "hol\0");
	test(t++, "ho\0a");
	test(t++, "hol\0");
	test(t++, "\0ola");
	test(t++, "ho\tla!");
	test(t++, "holaholahola");
}
