/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:43:52 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/14 18:00:30 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include <stdio.h>
#include <string.h>

/* ******************************* PROTOTIPOS ******************************* */

int	ft_strcmp(char *s1, char *s2);

/* ******************************* FUNCIONES ******************************** */

int main()
{
	printf("%d\t%d\n", strcmp("holah", "hola"), ft_strcmp("holah", "hola"));
	printf(" %d\t %d\n", strcmp("hola", "hola"), ft_strcmp("hola", "hola"));
	printf(" %d\t %d\n", strcmp("hola", "adios"), ft_strcmp("hola", "adios"));
	return 0;
}
