/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_ultimate_div_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 12:02:41 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/10 16:17:51 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;

	c = *b;
	*b = *a % *b;
	*a = *a / c;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;

// 	a = 22;
// 	b = 7;
// 	printf("a = %d (dividendo)\n", a);
// 	printf("b = %d (divisor)\n", b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a = %d (resultado)\n", a);
// 	printf("b = %d (resto)\n", b);
// }
