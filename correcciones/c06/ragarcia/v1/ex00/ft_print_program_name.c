/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragarcia <ragarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:34:50 by ragarcia          #+#    #+#             */
/*   Updated: 2021/08/22 18:04:41 by ragarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *str)
{
	int		i;
	char	a;

	i = 0;
	while (*(str + i) != '\0')
	{
		a = *(str + i);
		write(1, &a, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_print_program_name(argv[0]);
}
