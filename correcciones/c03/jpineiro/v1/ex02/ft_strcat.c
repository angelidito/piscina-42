/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:51:52 by jpineiro          #+#    #+#             */
/*   Updated: 2021/08/26 17:05:19 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	total_size;
	int	i;

	total_size = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
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
int	ft_strlen(char *str);

#include <stdio.h>
#include <string.h>
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
	}
	else
		printf("Test %d: OK!\n", test);
	printf("s1: %s\ns2: %s\n", s1, s2);
	printf("Expected: ");
	printf("%s\n", expected);
	printf("Obtained: ");
	printf("%s\n", obtained);
	printf("\n");
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
