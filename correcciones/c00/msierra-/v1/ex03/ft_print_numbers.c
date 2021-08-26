/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:18:18 by msierra-          #+#    #+#             */
/*   Updated: 2021/08/10 10:18:43 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	int	a;

	a = 0;
	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
}
