/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:30:05 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/10 10:06:01 by angmarti         ###   ########.fr       */
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
	bool	valid_digit;

	i = 0;
	valid_digit = false;
	while (i < 10)
	{
		if (tb[i] != '0' || valid_digit)
		{
			valid_digit = true;
			ft_putchar(tb[i]);
		}
		i++;
	}
	if (!valid_digit)
		ft_putchar('0');
}

void	ft_putnbr(int nb)
{
	char	digits[10];
	int		i;
	int		aux_nb;

	i = 9;
	aux_nb = nb;
	if (aux_nb < 0)
	{
		aux_nb *= -1;
		ft_putchar('-');
	}
	while (i >= 0)
	{
		digits[i] = aux_nb % 10 + '0';
		aux_nb /= 10;
		i--;
	}
	ft_putchartable(digits);
}

int	main(void)
{
	int		max;
	int		n;
	int		i;

	i = 0;
	max = -2147483648;
	n = max;
	while (i < 10)
	{
		printf("\nLast digit: %d\n", n % 10);
		printf("\nNumber now: %d\n", n);
		n /= 10;
		i++;
	}

	// ft_putnbr(-2147483648);
}
