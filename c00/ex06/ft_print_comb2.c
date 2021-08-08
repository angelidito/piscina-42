/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:38:25 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/08 21:19:47 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_print_comb2(void)
{
	int		n1;
	int		n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			if (n1 != 0 || n2 != 1)
				write(1, ", ", 2);
			ft_putnum(n1);
			write(1, " ", 1);
			ft_putnum(n2);
			n2++;
		}
		n1++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
