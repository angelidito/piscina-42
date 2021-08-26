/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 12:25:16 by sblanco-          #+#    #+#             */
/*   Updated: 2021/08/25 02:41:23 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

// int	main(void)
// {
// 	int i = 0;

// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// 	printf("%d\n", ft_fibonacci(i++));
// }
