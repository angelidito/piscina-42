/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:59:14 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 02:40:16 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	result;

	i = 2;
	result = 1;
	if (nb < 2)
		return (0);
	while (i < nb)
	{
		result = result && nb % i != 0;
		i++;
	}
	return (result);
}

// int	main(void)
// {
// 	int i = 0;

// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// 	printf("%d %d\n", i, ft_is_prime(i));
// 	i++;
// }
