/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:40:25 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/21 20:58:00 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <string.h>
#include <stdio.h>

/* ******************************* PROTOTIPOS ******************************* */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/* ******************************* FUNCIONES ******************************** */

int main()
{
	char    src[6] = "holas";
	char    src2[6] = "holas";
	char    dest[15] = "mundo";
	char    dest2[15] = "mundo";
	printf("         Fake: %u\n", ft_strlcat(dest, src, 15));
	printf("     Original: %lu\n", strlcat(dest2, src2, 15));
	printf("    Fake dest: %s\n", dest);
	printf("Original dest: %s\n", dest2);
	printf("\n");
	printf("         Fake: %u\n", ft_strlcat(dest, src, 0));
	printf("     Original: %lu\n", strlcat(dest2, src2, 0));
	printf("    Fake dest: %s\n", dest);
	printf("Original dest: %s\n", dest2);
	printf("\n");
	printf("         Fake: %u\n", ft_strlcat(dest, src, 0));
	printf("     Original: %lu\n", strlcat(dest2, src2, 0));
	printf("    Fake dest: %s\n", dest);
	printf("Original dest: %s\n", dest2);
	printf("\n");
	printf("         Fake: %u\n", ft_strlcat(dest, src, 15));
	printf("     Original: %lu\n", strlcat(dest2, src2, 15));
	printf("    Fake dest: %s\n", dest);
	printf("Original dest: %s\n", dest2);
	printf("\n");
	printf("     Original: %lu\n", strlcat(dest, src, 3));
	printf("         Fake: %u\n", ft_strlcat(dest, src, 3));
	printf("Original dest: %s\n", dest);
	printf("    Fake dest: %s\n", dest);
	printf("\n");
	printf("     Original: %lu\n", strlcat(dest, src, 4));
	printf("         Fake: %u\n", ft_strlcat(dest, src, 4));
	printf("Original dest: %s\n", dest);
	printf("    Fake dest: %s\n", dest);
	printf("\n");
	printf("     Original: %lu\n", strlcat(dest, src, 5));
	printf("         Fake: %u\n", ft_strlcat(dest, src, 5));
	printf("Original dest: %s\n", dest);
	printf("    Fake dest: %s\n", dest);
	printf("\n");
	printf("     Original: %lu\n", strlcat(dest, src, 7));
	printf("         Fake: %u\n", ft_strlcat(dest, src, 7));
	printf("Original dest: %s\n", dest);
	printf("    Fake dest: %s\n", dest);
	printf("\n");
	printf("     Original: %lu\n", strlcat(dest, src, 8));
	printf("         Fake: %u\n", ft_strlcat(dest, src, 8));
	printf("Original dest: %s\n", dest);
	printf("    Fake dest: %s\n", dest);
	printf("\n");
	return 0;
}
