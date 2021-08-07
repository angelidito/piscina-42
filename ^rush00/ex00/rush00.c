/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:12:16 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/07 17:45:45 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_tapa(int length)
{
	int	count;

	ft_putchar('o');
	count = 1;
	if (length > 1)
	{
		while (count < (length - 1))
		{
			ft_putchar('-');
			count++;
		}
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	print_lados(int length)
{
	int	count;

	ft_putchar('|');
	count = 1;
	if (length > 1)
	{
		while (count < (length - 1))
		{
			ft_putchar(' ');
			count++;
		}
		ft_putchar('|');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	col = 1;
	row = 1;
	if (x > 0 && y > 0)
	{
		print_tapa(x);
		row++;
		while (row <= y)
		{
			if (row < y)
				print_lados(x);
			else
				print_tapa(x);
			row++;
		}
	}
}
