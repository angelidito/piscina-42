/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:28:47 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 17:09:13 by angmarti         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(++nb))
		;
	return (nb);
}

// int	main(void)
// {

// 	printf("%d\n", ft_find_next_prime(96));
// }
