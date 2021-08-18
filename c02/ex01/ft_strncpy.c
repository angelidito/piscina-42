/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:11:02 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:13:06 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char *src;
// 	char dest[20];

// 	src = "Hello World";
// 	printf("===CASE1===\n");
// 	printf("base   : %s\n", src);
// 	strncpy(dest, src, 8);
// 	printf("cpy    : %s\n", dest);
// 	ft_strncpy(dest, src, 8);
// 	printf("ft_cpy : %s\n", dest);
// 	src = "               a     ";
// 	printf("===CASE2===\n");
// 	printf("base   : %s\n", src);
// 	strncpy(dest, src, 16);
// 	printf("cpy    : %s\n", dest);
// 	ft_strncpy(dest, src, 16);
// 	printf("ft_cpy : %s\n", dest);
// }
