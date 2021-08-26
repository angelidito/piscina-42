/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:18:37 by msierra-          #+#    #+#             */
/*   Updated: 2021/08/10 11:10:43 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_comb(void);

void	ft_print_comb(void)

{
	char	a[3];

	a[0] = 48;
	while (a[0] <= 57)
	{
		a[1] = a[0] + 1;
		while (a[1] <= 57)
		{
			a[2] = a[1] + 1;
			while (a[2] <= 57)
			{
				write(1, &a, 3);
				if (a[0] < 55)
				{
					write(1, ", ", 2);
				}
				a[2]++;
			}
			a[1]++;
		}
		a[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
}
