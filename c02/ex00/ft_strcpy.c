/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:41:47 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/13 13:12:18 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (*(dest + i) != '\0')
	{
		if (*(src + i) != '\0')
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
	}
	return (dest);
}

// void	ft_putstr(char *str)
// {
// 	int		i;

// 	i = -1;
// 	while (*(str + ++i) != '\0')
// 		write(1, (str + i), 1);
// }

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	buf[20];
	char	stdbuf[20];

	memset(buf, 'X', 20);
	memset(stdbuf, 'X', 20);
	buf[15] = 0;
	buf[0] = '_';
	stdbuf[15] = 0;
	stdbuf[0] = '_';
	ft_strcpy(buf + 1, "0123456789");
	strcpy(stdbuf + 1, "0123456789");
	if (memcmp(buf, stdbuf, 20))
		printf("FAIL\n");
	printf("%s", buf);
	return (0);
}
