/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:30:05 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/21 21:51:09 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchartable(char tb[])
{
	int		i;
	int		valid_digit;

	i = 0;
	valid_digit = 0;
	while (i < 10)
	{
		if (tb[i] != '0' || valid_digit)
		{
			valid_digit = true;
			ft_putchar(tb[i]);
		}
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	digits[10];
	int		i;
	int		aux_nb;

	if (nb == 0)
		ft_putchar('0');
	else
	{
		i = 9;
		aux_nb = nb;
		if (aux_nb < 0)
			ft_putchar('-');
		while (i >= 0)
		{
			if (aux_nb < 0)
				digits[i] = -(aux_nb % 10) + '0';
			else
				digits[i] = aux_nb % 10 + '0';
			aux_nb /= 10;
			i--;
		}
		ft_putchartable(digits);
	}
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	ft_putchar('\n');
// 	ft_putnbr(2147483647);
// 	ft_putchar('\n');
// 	ft_putnbr(0);
// 	ft_putchar('\n');
// 	ft_putnbr(-0);
// 	ft_putchar('\n');
// 	ft_putnbr(-1);
// 	ft_putchar('\n');
// 	ft_putnbr(1);
// 	ft_putchar('\n');
// 	ft_putnbr(-42);
// 	ft_putchar('\n');
// 	ft_putnbr(42);
// 	ft_putchar('\n');
// }
