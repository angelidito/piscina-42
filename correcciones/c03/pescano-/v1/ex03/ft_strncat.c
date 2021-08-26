/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:21:23 by pescano-          #+#    #+#             */
/*   Updated: 2021/08/23 12:14:48 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	g_contador;

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;
	char	*b;

	b = dest;
	a = src;
	g_contador = 0;
	while (*b != '\0')
	{
		b++;
	}
	while ((*a != '\0') && (g_contador < nb))
	{
		*b = *a;
		b++;
		a++;
		g_contador++;
	}
	*b = '\0';
	return (dest);
}
