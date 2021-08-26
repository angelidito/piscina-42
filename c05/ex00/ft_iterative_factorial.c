/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:18:06 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/26 15:44:21 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb > 1)
		total *= nb;
	return (total);
}

// int main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(1));
// 	printf("%d\n", ft_iterative_factorial(2));
// 	printf("%d\n", ft_iterative_factorial(3));
// 	printf("%d\n", ft_iterative_factorial(4));
// 	printf("%d\n", ft_iterative_factorial(5));
// }
