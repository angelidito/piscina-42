/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:11:54 by socana-b          #+#    #+#             */
/*   Updated: 2021/08/13 11:25:24 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	char	aux;
	int		i;

	i = 0;
	aux = '0';
	while (aux != '\0')
	{
		aux = *(str + i);
		i++;
	}
	return (i - 1);
}

int	main(void)
{
	char	a[7] = {'1', 'b', '3', 'd', '5', 'f', '7'};
	char	*ptr;

	ptr = &a[0];
	printf("%d", ft_strlen(ptr));
	return (0);
}
