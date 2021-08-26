/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 11:57:40 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/08/12 19:12:25 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	put_char(char unidad, char decena, char centena, char separacion);

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;
	char	z;

	c = '0';
	z = ',';
	while (c <= '7')
	{
		d = '1';
		while (d <= '8')
		{
			u = '2';
			while (u <= '9')
			{
				if ((c < d) && (d < u))
				{
					put_char(u, d, c, z);
				}
				u++;
			}
			d++;
		}
		c++;
	}	
}

void	put_char(char unidad, char decena, char centena, char separacion)
{
	if (centena == '7')
	{
		write(1, &centena, 1);
		write(1, &decena, 1);
		write(1, &unidad, 1);
	}
	else
	{
		write(1, &centena, 1);
		write(1, &decena, 1);
		write(1, &unidad, 1);
		write(1, &separacion, 1);
		write(1, " ", 1);
	}
}

int	main(void)
{
	ft_print_comb();
}
