/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 17:24:43 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 17:38:48 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = argc;
	while (--i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write (1, &argv[i][j++], 1);
		}
		write (1, "\n", 1);
	}
}
