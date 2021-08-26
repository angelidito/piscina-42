/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:44:42 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/26 15:47:10 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	int	power;
// 	int	n;

// 	n = 3;
// 	power = -1;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// 	printf("%d^%d = %d\n", n, power, ft_recursive_power(n, power));
// 	power++;
// }
