/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:35:21 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:16:16 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putdecimal_as_hexa(int d)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	if (d < 16)
		ft_putchar(ptr[d]);
	else if (d == 127)
	{
		ft_putchar('7');
		ft_putchar('f');
	}
	else
	{
		ft_putchar('1');
		ft_putchar(ptr[d - 15]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	decimal;

	i = -1;
	decimal = 0;
	while (str[++i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			decimal = str[i];
			ft_putdecimal_as_hexa(decimal);
		}
		else
			ft_putchar(str[i]);
	}
}

// int	main(void)
// {
// 	char	str[] = "Coucou tu vas\tbien\n?";

// 	ft_putstr_non_printable(str);
// }
