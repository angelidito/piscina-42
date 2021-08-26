/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:35:04 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/08/12 19:21:24 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	printer(char c[11], int i);

void	ft_putnbr(int nb)
{
	char	numeros[11];
	int		ind;

	ind = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	else
		while (nb > 0)
		{	
			numeros[ind] = nb % 10 + '0';
			nb /= 10;
			ind++;
		}
	
	printer(numeros, ind);
}

void	printer(char c[11], int i)
{
	while (i >= 0)
	{
		write(1, &c[i], 1);
		i--;
	}
}

int	main(void)
{
	// ft_putnbr(2147483647);
	// write(1, "\n", 1);
	ft_putnbr(-1);
	// write(1, "\n", 1);
	// ft_putnbr(0);
	// write(1, "\n", 1);
	// ft_putnbr(1);
	// write(1, "\n", 1);
	// ft_putnbr(-1);
	// write(1, "\n", 1);
}
