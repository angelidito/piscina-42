/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:47:31 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/08/15 18:33:09 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_put_hexa(int a, int err)
{
	char	*prb;

	prb = "0123456789abcdef";
	if (a <= 0 && err == 0)
	{
		a += 256;
	}
	if (a >= 16)
	{
		ft_put_hexa(a / 16, 1);
		ft_put_hexa(a % 16, 1);
	}
	else
	{
		if (err == 0)
			ft_putchar('0');
		ft_putchar(prb[a]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			j = str[i];
			ft_put_hexa(j, 0);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(void)
{
    char a[] = "Coucou\btu vas bien ?";

    ft_putstr_non_printable(a);
}