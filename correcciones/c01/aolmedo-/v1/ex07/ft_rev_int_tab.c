/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 18:32:44 by aolmedo-          #+#    #+#             */
/*   Updated: 2021/08/19 20:05:41 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		aux = *(tab + i);
		*(tab + i) = *(tab + (size - i - 1));
		*(tab + (size - i - 1)) = aux;
		i++;
	}
}
void	ft_rev_int_tab(int *tab, int size);

void	putarr(int arr[], int size)
{
	int i;

	i = 0;
	while (i < (size - 1))
	{
		printf ("%d,", arr[i]);
		i++;
	}
	printf ("%d\n", arr[size - 1]);
}
