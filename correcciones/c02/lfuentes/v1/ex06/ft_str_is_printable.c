/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuentes <LauraFG99@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 12:40:49 by lfuentes          #+#    #+#             */
/*   Updated: 2021/08/23 12:40:51 by lfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	size;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' '))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
