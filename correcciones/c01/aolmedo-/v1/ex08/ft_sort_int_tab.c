/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:33:02 by aolmedo-          #+#    #+#             */
/*   Updated: 2021/08/19 20:06:42 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	m;
	int	n;

	m = 0;
	while (m < size)
	{
		n = 0;
		while (n < size)
		{
			if (*(tab + m) < *(tab + n))
			{
				aux = *(tab + m);
				*(tab + m) = *(tab + n);
				*(tab + n) = aux;
			}
			n++;
		}
		m++;
	}
}

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size - 1); i++)
		printf("%d,", arr[i]);
	printf("%d\n", arr[size - 1]);
}
