/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:43:53 by nmelgar-          #+#    #+#             */
/*   Updated: 2021/08/25 18:32:57 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	unb;

	if (nb < 0)
	{
		unb = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
		unb = (unsigned int)nb;
	if (unb >= 10)
	{
		ft_putnbr(unb / 10);
		ft_putnbr(unb % 10);
	}
	else
		ft_putchar(unb + '0');
}

int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(-0);
	ft_putchar('\n');
	ft_putnbr(-1);
	ft_putchar('\n');
	ft_putnbr(1);
	ft_putchar('\n');
	ft_putnbr(-42);
	ft_putchar('\n');
	ft_putnbr(42);
	ft_putchar('\n');
}