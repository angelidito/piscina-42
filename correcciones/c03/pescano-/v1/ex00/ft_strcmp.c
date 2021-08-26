/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 10:22:36 by pescano-          #+#    #+#             */
/*   Updated: 2021/08/23 12:04:03 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	contador;

	contador = 0;
	while ((s1[contador] == s2[contador])
		&& (s1[contador] != '\0')
		&& (s2[contador] != '\0'))
	{
		contador++;
	}
	return (s1[contador] - s2[contador]);
}
