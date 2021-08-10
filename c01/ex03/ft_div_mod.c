/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:08:30 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/10 11:52:05 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		d;
	int		m;

	d = a / b;
	m = a % b;
	*div = d;
	*mod = m;
}

// int	main(void)
// {
// 	int		a;
// 	int		b;
// 	int		*div;
// 	int		*mod;

// 	a = 20;
// 	b = 7;
// 	div = &a;
// 	mod = &b;
// 	ft_div_mod(a, b, div, mod);

// 	printf("div = %d\n", *div);
// 	printf("mod = %d\n", *mod);
// }
