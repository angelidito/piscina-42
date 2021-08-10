/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 14:36:45 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/10 11:42:03 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int		a;
	int		*nbr;

	a = 20;
	nbr = &a;
	printf("nbr = %d\n", *nbr);
	ft_ft(nbr);
	printf("nbr = %d\n", *nbr);
}
