/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:10:50 by socana-b          #+#    #+#             */
/*   Updated: 2021/08/12 19:52:32 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int		a;
	int		b;
	int		*div;
	int		*mod;

	a = 15;
	b = 7;
	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div = %d\n", *div);
	printf("mod = %d\n", *mod);
}
