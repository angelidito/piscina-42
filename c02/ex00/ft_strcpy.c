/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:41:47 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:12:56 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*src;
// 	char	dest[13];
// 	// char	str1[] = "Flavio";
// 	// char	str2[] = "Gaucho";

// 	src = "Hello World!";
// 	printf("base   : %s\n", src);
// 	strcpy(dest, src);
// 	printf("cpy    : %s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("ft_cpy : %s\n", dest);
// }
