/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 20:30:24 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/12 13:22:57 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap_positions(int *tab, int i, int j)
{
	int		aux;

	aux = *(tab + i);
	*(tab + i) = *(tab + j);
	*(tab + j) = aux;
}

int	ft_search_min_from_pos(int *tab, int size, int pos)
{
	int		min_pos;

	min_pos = pos;
	while (pos < size)
	{
		if (*(tab + min_pos) > *(tab + pos))
			min_pos = pos;
		pos++;
	}
	return (min_pos);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		min_pos;

	i = 0;
	while (i < size)
	{	
		min_pos = ft_search_min_from_pos(tab, size, i);
		ft_swap_positions(tab, i, min_pos);
		i++;
	}
}

// void	ft_putnbrs(int *str, int size)
// {
// 	int		i;

// 	printf("START\t");
// 	i = 0;
// 	while (i < size - 1)
// 		printf("%d,", *(str + i++));
// 	printf("%d\tEND\n", *(str + i));
// }

// int	main(void)
// {
// 	int		table[10] = {9,5,4,6,7,8,1,3,2,0};
// 	int		*ptr;

// 	ptr = &table[0];
// 	ft_putnbrs(ptr, 10);
// 	ft_sort_int_tab(ptr, 10);
// 	ptr = &table[0];
// 	ft_putnbrs(ptr, 10);
// 	return (0);
// }
