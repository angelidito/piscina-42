/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:40:25 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/14 18:01:49 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <stdio.h>
#include <string.h>

/* ******************************* PROTOTIPOS ******************************* */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/* ******************************* FUNCIONES ******************************** */

int main()
{
	printf("%d\t%d\n", strncmp("hole", "hola", 4), ft_strncmp("hole", "hola", 4));
	printf(" %d\t %d\n", strncmp("adios", "adios", 6), ft_strncmp("adios", "adios", 6));
	printf(" %d\t %d\n", strncmp("hola", "adios", 6), ft_strncmp("hola", "adios", 6));
	return 0;
}

