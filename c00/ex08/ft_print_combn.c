/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 11:09:46 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/09 21:56:05 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar('N');
		ft_putchar('o');
		ft_putchar(' ');
		ft_putchar('s');
		ft_putchar('e');
		ft_putchar(' ');
		ft_putchar('h');
		ft_putchar('a');
		ft_putchar('c');
		ft_putchar('e');
		ft_putchar('r');
		ft_putchar('l');
		ft_putchar('o');
		ft_putchar(':');
		ft_putchar('(');
		ft_putchar('\n');
		i++;
	}
}
