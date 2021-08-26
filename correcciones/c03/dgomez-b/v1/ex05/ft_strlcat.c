/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:50:24 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/13 13:36:48 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <string.h>
#include <stdio.h>

/* ******************************* PROTOTIPOS ******************************* */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/* ******************************* FUNCIONES ******************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	if (i + j < size)
		*(dest + i + j) = '\0';
	else
		*(dest + size) = '\0';
	return (i + j);
}
