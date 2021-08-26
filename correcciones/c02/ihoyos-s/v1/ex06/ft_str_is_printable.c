/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihoyos-s <ihoyos-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:39:31 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/23 12:39:49 by ihoyos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			x = 1;
		else
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}
