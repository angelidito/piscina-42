/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 13:55:56 by msierra-          #+#    #+#             */
/*   Updated: 2021/08/09 09:54:19 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	char	a;

	a = 'z';
	while (a >= 'a')
	{
		write(1, &a, 1);
		a--;
	}
}
