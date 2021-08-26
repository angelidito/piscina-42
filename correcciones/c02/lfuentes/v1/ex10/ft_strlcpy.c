/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfuentes <LauraFG99@hotmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:05:04 by lfuentes          #+#    #+#             */
/*   Updated: 2021/08/23 18:05:06 by lfuentes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size <= 22)
	{
		while (i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		while (dest[i] != '\0')
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (i);
}
