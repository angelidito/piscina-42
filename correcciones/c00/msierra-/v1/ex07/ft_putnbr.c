/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:18:54 by msierra-          #+#    #+#             */
/*   Updated: 2021/08/10 11:12:54 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int nb);
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb < 10)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(2147483647);
}
