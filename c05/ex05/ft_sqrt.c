/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:48 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/26 15:47:01 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int		rt;

	if (nb <= 0)
		return (0);
	if (nb % 2 == 1)
	{
		rt = 1;
		while (nb / rt != rt && rt <= 46340 && rt * rt < nb)
			rt += 2;
	}
	else
	{
		rt = 2;
		while (nb / rt != rt && rt <= 46340 && rt * rt < nb)
			rt += 2;
	}
	if (rt * rt != nb)
		return (0);
	return (rt);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(3));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(1000000));
// 	printf("%d\n", ft_sqrt(2147483647));
// 	printf("%d\n", ft_sqrt(-45));
// 	printf("%d\n", ft_sqrt(0));
// }
