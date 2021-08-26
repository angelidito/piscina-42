/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragarcia <ragarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:16:18 by ragarcia          #+#    #+#             */
/*   Updated: 2021/08/22 18:05:58 by ragarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_params(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (*(str + i) != '\0')
	{
		a = *(str + i);
		write (1, &a, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{	
		ft_rev_params(argv[i]);
		write (1, "\n", 1);
		i--;
	}
}
