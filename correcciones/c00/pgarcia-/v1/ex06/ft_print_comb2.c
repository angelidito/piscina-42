/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:03:32 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/08/12 19:18:09 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	printer(char c);
void	num(int	n);

void	printer(char c)
{
	write(1, &c, 1);
}

void	num(int	n)
{
	printer ((n / 10) + '0');
	printer ((n % 10 ) + '0');
}

void	ft_print_comb2(void)
{
	int		i;
	int		d;

	i = 00;
	while (i <= 98)
	{
		d = i + 1;
		while (d <= 99)
		{
			num(i);
			write(1, " ", 1);
			num(d);
			if (i < 98)
			{
				write(1, ", ", 2);
			}
			d++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
