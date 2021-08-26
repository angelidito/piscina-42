/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:32:08 by aolmedo-          #+#    #+#             */
/*   Updated: 2021/08/20 11:05:07 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<unistd.h>

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

	a[1] = 'a';
	a[2] = 'b';
	a[3] = 'c';
	a[0] = 'd';
	ptr = &a[0];
	ft_putstr(ptr);
	return (0);
}
