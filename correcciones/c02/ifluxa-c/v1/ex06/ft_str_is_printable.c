/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 13:12:20 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/13 13:23:37 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;
	int	solucion;

	i = 0;
	solucion = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] < 255))
			solucion = 1;
		else
			solucion = 0;
		i++;
	}
	return (solucion);
}
