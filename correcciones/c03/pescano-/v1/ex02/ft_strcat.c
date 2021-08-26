/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 14:12:14 by pescano-          #+#    #+#             */
/*   Updated: 2021/08/23 12:11:44 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*a;
	char	*b;

	b = dest;
	a = src;
	while (*b != '\0')
	{
		b++;
	}
	while (*a != '\0')
	{
		*b = *a;
		b++;
		a++;
	}
	*b = '\0';
	return (dest);
}
