/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihoyos-s <ihoyos-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 17:10:35 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/22 17:10:59 by ihoyos-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
