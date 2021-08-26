/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:54:00 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 17:09:27 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int		i;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 1)
		nb = 2;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

// int	main(void)
// {
// 	int	prime;

// 	prime = 0;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 1;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 2;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 3;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 4;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 5;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 7;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 9;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 11;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 12;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 2147483647;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 12799;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 104729;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 104730;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 102769;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 90821;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = 33129;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = -1;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	prime = -2147483648;
// 	printf("%d: %d\n", prime, ft_find_next_prime(prime));
// 	return (0);
// }
