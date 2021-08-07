/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 21:38:25 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/07 15:31:57 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	char	num0;
	char	num1;
	char	num2;

	num0 = '0';
	while (num0 < '8')
	{
		num1 = num0 + 1;
		while (num1 < '9')
		{
			num2 = num1 + 1;
			while (num2 <= '9')
			{
				write(1, &num0, 1);
				write(1, &num1, 1);
				write(1, &num2, 1);
				if (num0 != '7' && num0 != '8' && num0 != '9')
					write(1, ", ", 2);
				num2++;
			}
			num1++;
		}
		num0++;
	}
}

int	main(void)
{
	ft_print_comb();
}
