/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 18:40:38 by socana-b          #+#    #+#             */
/*   Updated: 2021/08/12 20:01:31 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (*(tab + i) < *(tab + j))
			{
				aux = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = aux;
			}
			j++;
		}
		i++;
	}
}

void	ft_putnbrs(int *str, int size)
{
	int		i;

	printf("START\t");
	i = 0;
	while (i < size - 1)
		printf("%d,", *(str + i++));
	printf("%d\tEND\n", *(str + i));
}

int	main(void)
{
	int		table[10] = {9,5,4,6,7,8,1,3,2,0};
	int		*ptr;

	ptr = &table[0];
	ft_putnbrs(ptr, 10);
	ft_sort_int_tab(ptr, 10);
	ptr = &table[0];
	ft_putnbrs(ptr, 10);
	return (0);
}
