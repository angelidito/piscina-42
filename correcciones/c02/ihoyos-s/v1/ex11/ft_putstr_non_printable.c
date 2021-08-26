/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:54:11 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/26 12:58:15 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	hex(char c)
{
	char	*base;

	base = "0123456789abcdef";
	putchar('\\');
	putchar(base[c / 16]);
	putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] >= 127)
		{
			hex(str[i]);
		}
		else
		{
			putchar(str[i]);
		}
		i++;
	}
}
int	main(void)
{
	char	str[] = "Coucou tu vas\tbien\n?";

	ft_putstr_non_printable(str);
}