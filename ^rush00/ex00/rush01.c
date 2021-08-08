/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:12:16 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/08 12:41:10 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush01(int x, int y)
{
	int	col;
	int	row;

	row = 1;
	while (x > 0 && y > 0 && y >= row)
	{
		col = 1;
		while (x >= col)
		{
			if ((col == 1 && row == 1) || (col == x && row == y && x != 1))
				ft_putchar('/');
			else if ((col == x && row == 1) || (col == 1 && row == y))
				ft_putchar('\\');
			else if (row == 1 || row == y)
				ft_putchar('*');
			else if ((col == 1 || col == x) && row != 1 && row != y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
