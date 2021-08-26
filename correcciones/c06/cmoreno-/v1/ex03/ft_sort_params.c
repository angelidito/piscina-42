/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:41:54 by cmoreno-          #+#    #+#             */
/*   Updated: 2021/08/25 19:11:07 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int		ft_strcmp(char *s1, char *s2);

void	ft_sort_int_tab(char **tab, int size);

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	i = 0;
	ft_sort_int_tab(argv, argc);
	while (i < argc - 1)
	{
		j = 0;
		while (argv[i + 1][j])
		{
			write(1, &argv[i + 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned int	aux;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}
	else
	{
		aux = (unsigned char)s1[i] - (unsigned char)s2[i];
		return (aux);
	}
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i + 1 < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				aux = tab[j];
				tab[j] = tab[i];
				tab[i] = aux;
			}
			j++;
		}
		i++;
	}
}
