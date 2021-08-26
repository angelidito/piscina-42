/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:41:40 by plavin-s          #+#    #+#             */
/*   Updated: 2021/08/11 11:39:01 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb2(void);

void	ft_print(int a)
{
	char	aa;
	char	dd;
	char	uu;

	if (a < 9)
	{
		aa = a + '0';
		write(1, "0", 1);
		write(1, &aa, 1);
	}
	else
	{
		dd = a / 10 + '0';
		uu = a % 10 + '0';
		write(1, &dd, 1);
		write(1, &uu, 1);
	}
}

void	ft_print_comb2(void)
{
	int		d;
	int		u;
	char	dd;
	char	uu;

	d = 0;
	while (d <= 98)
	{
		dd = d + '0';
		u = d + 1;
		while (u <= 99)
		{
			uu = u + '0';
			write(1, " ", 1);
			ft_print(d);
			write(1, " ", 1);
			ft_print(u);
			if (d != 98 || u != 99)
			{
				write(1, ",", 1);
			}
			u++;
		}
		d++;
	}
}
int	main(void)
{
	ft_print_comb2();
}
