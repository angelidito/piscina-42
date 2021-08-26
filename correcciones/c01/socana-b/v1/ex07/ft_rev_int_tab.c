/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:12:13 by socana-b          #+#    #+#             */
/*   Updated: 2021/08/12 19:59:24 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
void	ft_putstr(int *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putchartable(char tb[]);
void	ft_putnbr(int nb);

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = *(tab + i);
		*(tab + i) = *(tab + (size - i - 1));
		*(tab + (size - i - 1)) = aux;
		i++;
	}
}
int	main(void)
{
	int		table[5] = {1, 2, 3, 4, 5};
	int		*ptr;

	ptr = &table[0];
	// ft_putstr(ptr);
	for (int i = 0; i < 5; i++)
	{
		ft_putnbr(table[i]);
	}
	ft_putchar('\n');
	ft_rev_int_tab(ptr, 5);
	ptr = &table[0];
	// ft_putstr(ptr);
	for (int i = 0; i < 5; i++)
	{
		ft_putnbr(table[i]);
	}
	return (0);
}

void	ft_putstr(int *str)
{
	int		i;

	i = -1;
	while (*(str + ++i) != '\0')
		printf("%d\n", *(str + i));
	printf("FIN\n");
}

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
