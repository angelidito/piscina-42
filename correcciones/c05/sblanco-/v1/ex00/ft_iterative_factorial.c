/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 11:06:46 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 02:41:01 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	acc;

	acc = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		nb--;
		acc *= nb;
	}
	return (acc);
}

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(4));
// 	printf("%d\n", ft_iterative_factorial(5));
// }
