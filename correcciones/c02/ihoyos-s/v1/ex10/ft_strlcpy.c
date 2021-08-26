/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 18:21:19 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/26 13:32:53 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)
{
	int				x;
	unsigned int	i;

	x = 0;
	i = 0;
	if (size <= 22)
	{
		while (src[x] != '\0')
		{
			x++;
		}
		if (size > 0)
		{
			while (i < size - 1)
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
		}
	}
	return (x);
}
