/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:07:30 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 13:41:56 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	acc;

	acc = 1;
	if (power < 0)
		acc = 0;
	while (power > 0)
	{
		acc *= nb;
		power--;
	}
	return (acc);
}

// int	main(void)
// {
// 	int i = 0;
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// 	printf("%d\n", ft_iterative_power(3, i++));
// }
