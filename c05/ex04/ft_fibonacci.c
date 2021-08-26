/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:50:02 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/26 15:47:06 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(8));
// }
