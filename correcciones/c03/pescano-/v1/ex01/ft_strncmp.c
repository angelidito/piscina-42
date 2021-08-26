/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:47:08 by pescano-          #+#    #+#             */
/*   Updated: 2021/08/23 12:07:02 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	contador;

	contador = 0;
	while (contador < n && (s1[contador] && s2[contador]))
	{
		if (s1[contador] != s2[contador])
			return ((unsigned char)s1[contador] - (unsigned char)s2[contador]);
		contador++;
	}
	if (contador < n && ((s1[contador] == '\0' && s2[contador] != '\0') || \
				(s1[contador] != '\0' && s2[contador] == '\0')))
		return ((unsigned char)s1[contador] - (unsigned char)s2[contador]);
	return (0);
}
