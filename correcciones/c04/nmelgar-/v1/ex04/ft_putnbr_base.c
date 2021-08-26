/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 00:29:40 by nmelgar-          #+#    #+#             */
/*   Updated: 2021/08/25 18:35:46 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar4(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_to_base(int nbr, char *base, int size)
{
	unsigned int	i;
	char			a;

	if (nbr < 0)
	{
		ft_putchar4('-');
		i = nbr * (-1);
	}
	else
		i = nbr;
	if (i >= (unsigned int)size)
		ft_putnbr_to_base(i / size, base, size);
	a = base[i % size];
	ft_putchar4(a);
}

int	ft_ok_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != base[i] && base[j] != '\0')
			j++;
		if (base[i] == '+' || base[i] == '-' || base[i] == base[j])
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	if (ft_ok_base(base) == 1)
	{
		while (base[i] != '\0')
			i++;
		ft_putnbr_to_base(nbr, base, i);
	}
}
int	main(void)
{
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-2147483647, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(2147483647, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-42, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(0, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-0, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(42, "0123456789abcdef");
	printf("\n");
}
