/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 16:28:52 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/13 11:48:53 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = -1;
	while (*(str + ++i) != '\0')
		write(1, (str + i), 1);
}

// int	main(void)
// {
// 	char	a[4];
// 	char	*ptr;

// 	a[1] = 'a';
// 	a[2] = 'b';
// 	a[3] = 'c';
// 	a[0] = 'd';
// 	ptr = &a[0];
// 	ft_putstr(ptr);
// 	return (0);
// }