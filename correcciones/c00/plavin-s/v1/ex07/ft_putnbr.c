/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 18:11:50 by plavin-s          #+#    #+#             */
/*   Updated: 2021/08/11 11:28:45 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <math.h>

int		array[10];

int * ft_array(int h)
{
	int counter;
	int j;
	int	*skrr;

	counter = 0;
	if (h < 9)
	{
		array[counter] = h;
	}
	else
	{
		j = h % 10;
		array[counter] = j;
		counter++;
		h = h /10;
		ft_array(h);
	}
	skrr = array;
	return (skrr);
}
void	punt(int* puntero)
{
	int acu;
	int counter;
	int npunt;
	char result;

	counter = 0;
	while(counter < 3)
	{
		npunt = *puntero;
		acu = acu + npunt*pow(10, counter);
		puntero++;
		counter++;
	}
	result = acu +'0';
	write(1, &result, 1);
}

	

