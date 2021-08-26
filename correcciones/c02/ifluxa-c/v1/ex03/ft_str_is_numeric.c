/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:26:32 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/13 12:51:12 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	solucion;

	i = 0;
	solucion = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
			solucion = 1;
		else
			solucion = 0;
		i++;
	}
	return (solucion);
}
