/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 20:29:38 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/07 00:39:09 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	character;

	if (n < 0)
		character = 'N';
	else
		character = 'P';
	write(1, &character, 1);
}
