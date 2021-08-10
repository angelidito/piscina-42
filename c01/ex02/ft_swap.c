/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:47:21 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/09 18:13:42 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;

// 	a = 5;
// 	b = 10;
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);
// 	ft_swap(&a, &b);
// 	printf("a = %d\n", a);
// 	printf("b = %d\n", b);
// 	return (0);
// }
