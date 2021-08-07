/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:48:33 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/07 15:31:45 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	ascii_code;

	ascii_code = 'a';
	while (ascii_code <= 'z')
	{
		write(1, &ascii_code, 4);
		ascii_code++;
	}
}

int	main(void)
{
	ft_print_alphabet();
}
