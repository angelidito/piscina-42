/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 10:55:54 by pgarcia-          #+#    #+#             */
/*   Updated: 2021/08/12 19:11:02 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, &"P", 1); // Se puede sin esto
	}
	else
	{
		write(1, &"N", 1); // Se puede sin esto
	}
}

int	main(void)
{
	ft_is_negative(4232);
}
