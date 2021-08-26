/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 17:31:07 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/23 15:22:38 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

// void	test(int test, char s2[])
// {
// 	char	s1[100] = "STR_";
// 	char	*expected;
// 	char	*obtained;

// 	expected = strcat(&s1[0], &s2[0]);
// 	obtained = ft_strcat(&s1[0], &s2[0]);
// 	if (strcmp(expected, obtained))
// 	{
// 		printf("Test %d: Error!\n", test);
// 	}
// 	else
// 		printf("Test %d: OK!\n", test);
// 	printf("s1: %s\ns2: %s\n", s1, s2);
// 	printf("Expected: ");
// 	printf("%s\n", expected);
// 	printf("Obtained: ");
// 	printf("%s\n", obtained);
// 	printf("\n");
// }

// int	main(void)
// {
// 	int	t;

// 	t = 1;
// 	test(t++, "hola");
// 	test(t++, "hol?");
// 	test(t++, "ho??");
// 	test(t++, "hol\0");
// 	test(t++, "ho\0a");
// 	test(t++, "hol\0");
// 	test(t++, "\0ola");
// 	test(t++, "ho\tla!");
// 	test(t++, "holaholahola");
// }
