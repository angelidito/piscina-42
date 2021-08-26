/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragarcia <ragarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:25:20 by ragarcia          #+#    #+#             */
/*   Updated: 2021/08/22 20:04:12 by ragarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	a;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (*(argv[j] + i) != '\0')
		{
			a = *(argv[j] + i);
			write (1, &a, 1);
			i++;
		}
		j++;
		write (1, "\n", 1);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0' && (*(s1 + i) == *(s2 + i)))
	{	
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*aux;

	j = 1;
	while (j < argc)
	{
		i = 1;
		while (*(argv + i + 1) != '\0')
		{	
			if (ft_strcmp(*(argv + i),*(argv + i + 1)) > 0)
			{
				aux = *(argv + i);
				*(argv + i) = *(argv + i + 1);
				*(argv + i + 1) = aux;
			}
			i++;
		}
		j++;
	}
	ft_sort_params(argc, argv);
}
