/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 16:16:36 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 02:40:22 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = nb == 1;
	while (i <= nb / 2 && !result)
	{
		if (i * i == nb)
			result = i;
		i++;
	}
	return (result);
}

// int	main(void)
// {

// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(16));
// 	printf("%d\n", ft_sqrt(9));
// 	printf("%d\n", ft_sqrt(25));
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(8676*8676));
// }
