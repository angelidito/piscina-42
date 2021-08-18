/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nlogic.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 22:58:09 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/08/15 23:37:09 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

/* ******************************* PROTOTIPOS ******************************* */

/* ******************************* FUNCIONES ******************************** */

void	putn(int *matrix, int n)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	while (j++ < 4)
	{
		if (*(matrix + j + (i * 6)) == n)
		{
			j = 0;
			i++;
		}
	}
	k = 0;
	j = 1;
	while (k++ < 4)
	{
		if (*(matrix + j + (k * 6)) == n)
		{
			k = 0;
			j++;
		}
	}
	*(matrix + j + (i * 6)) = 4;
}

int	countn(int *matrix, int n)
{
	int	i;
	int	j;
	int	cant;

	cant = 0;
	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			if (*(matrix + j + (i * 6)) == n)
				++cant;
		}
	}
	return (cant);
}

void	fulln(int *matrix, int n)
{
	if (countn(matrix, n) == 3)
		putn(matrix, 4);
}
