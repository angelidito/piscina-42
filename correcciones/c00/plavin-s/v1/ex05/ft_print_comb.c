/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 09:04:34 by plavin-s          #+#    #+#             */
/*   Updated: 2021/08/11 11:35:52 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_if(char a, char b, char c);

void	print(char a, char b, char c)
{
	write(1, &a, 1 );
	write(1, &b, 1 );
	write(1, &c, 1 );
	ft_if(a, b, c);
}

void	ft_if(char a, char b, char c)
{
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
	else
		write(1, ", ", 2);

	int i = -1;
	while (++i < 10)
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	cc;
	char	dd;
	char	uu;

	cc = '0';
	while (cc <= '7')
	{
		dd = cc + 1;
		while (dd <= '8')
		{
			uu = dd + 1 ;
			while (uu <= '9')
			{	
				print(cc, dd, uu);
				uu++;
			}
			dd++;
		}
		cc++;
	}
}

int	main(void)
{
	ft_print_comb();
}
