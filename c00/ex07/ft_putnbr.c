/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:30:05 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/08 21:45:03 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int n)
{
	if (n < 10)
	{
		ft_putchar('0');
		ft_putchar(n + '0');
	}
	else
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}
/*
** int [−2.147.483.647, +2.147.483.647] 
%10 y /10. e ir almacenando en un array char
*/
void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
}

int	main(void)
{
	printf("%d", 2147483647);
}
s