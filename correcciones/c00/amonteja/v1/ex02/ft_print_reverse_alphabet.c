/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:09:10 by amonteja          #+#    #+#             */
/*   Updated: 2021/08/11 12:23:34 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		i;
	char	c;

	i = 0;
	c = 'z';
	while (i < 26)
	{
		ft_putchar (c);
		c--;
		i++;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
}