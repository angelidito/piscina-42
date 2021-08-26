/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoreno- <cmoreno-@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:34:52 by cmoreno-          #+#    #+#             */
/*   Updated: 2021/08/23 20:51:59 by cmoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			if (j != 0)
			{
				write(1, &argv[j][i], 1);
			}
			i++;
		}
		if (j != 0)
			write(1, "\n", 1);
		j++;
	}
}
