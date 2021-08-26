/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:11:06 by socana-b          #+#    #+#             */
/*   Updated: 2021/08/12 19:53:21 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}

int	main(void)
{
	int		a;
	int		b;

	a = 22;
	b = 7;
	printf("a = %d (dividendo)\n", a);
	printf("b = %d (divisor)\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d (resultado)\n", a);
	printf("b = %d (resto)\n", b);
}
