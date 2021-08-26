/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:26:12 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/26 13:32:50 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
 #include <string.h>
unsigned int	count(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	return (i);
}

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	if (count(src) >= n)
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (count(src) < n)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

int	main(void)
{
	char *src;
	char dest[20];

	src = "Hello World";
	printf("===CASE1===\n");
	printf("base   : %s\n", src);
	strncpy(dest, src, 8);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 8);
	printf("ft_cpy : %s\n", dest);
	src = "               a     ";
	printf("===CASE2===\n");
	printf("base   : %s\n", src);
	strncpy(dest, src, 16);
	printf("cpy    : %s\n", dest);
	ft_strncpy(dest, src, 16);
	printf("ft_cpy : %s\n", dest);
}