/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:12:02 by amonteja          #+#    #+#             */
/*   Updated: 2021/08/11 12:28:56 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)

{
	write (1, &c, 1);
}

void	ft_is_negative(int n)

{
	if (n < 0)
		ft_putchar('N');
	else if (n > 0)
		ft_putchar('P');
	else
		ft_putchar('P');
}