/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:17:16 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 02:41:26 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (ft_recursive_power(nb, power - 1) * nb);
}

// int	main(void)
// {
// 	int i = 0;
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// 	printf("%d\n", ft_recursive_power(3, i++));
// }
