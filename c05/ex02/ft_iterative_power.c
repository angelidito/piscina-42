/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:40:13 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/26 15:47:21 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	total;

	if (power < 0)
		return (0);
	total = 1;
	while (power > 0)
	{
		total *= nb;
		power--;
	}
	return (total);
}

// int	main(void)
// {
// 	int	power;
// 	int	n;

// 	n = 0;
// 	power = -1;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_iterative_power(n, power));
// 	power++;
// }
