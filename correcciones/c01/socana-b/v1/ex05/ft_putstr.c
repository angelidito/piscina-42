/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:11:24 by socana-b          #+#    #+#             */
/*   Updated: 2021/08/12 19:54:30 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	aux;
	int		i;

	i = 0;
	aux = '0';
	while (aux != '\0')
	{
		aux = *(str + i);
		if (aux != '\0')
			write(1, (str + i), 1);
		i++;
	}
}

int	main(void)
{
	char	a[4];
	char	*ptr;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	ptr = &a[0];
	ft_putstr(ptr);
	return (0);
}
