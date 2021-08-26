/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:18:47 by msierra-          #+#    #+#             */
/*   Updated: 2021/08/10 10:18:50 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb2(void);
void	ft_putint(int n);
void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			if (b > 1)
			{
				write(1, ", ", 2);
				ft_putint(a);
				write(1, " ", 1);
				ft_putint(b);
				b++;
			}
		}
		a++;
	}
}

void	ft_putint(int n)
{
	if (n < 10)
	{
		ft_putchar(48);
		ft_putchar(n + 48);
	}
	else
	{
		ft_putchar(n / 10 + 48);
		ft_putchar(n % 10 + 48);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
