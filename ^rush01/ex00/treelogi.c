/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treelogi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:02:22 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/08/15 23:41:18 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

/* ******************************* PROTOTIPOS ******************************* */

void	emptyfillblockrepeat(int *matrix);

/* ******************************* FUNCIONES ******************************** */

void	blockthree(int *matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (*(matrix + j + (i * 6)) == 3)
			{
				if (j == 0)
					*(matrix + j + 1 + (i * 6)) = -3;
				else if (j == 5)
					*(matrix + j - 1 + (i * 6)) = -3;
				else if (i == 0)
					*(matrix + j + ((i + 1) * 6)) = -3;
				else if (i == 5)
					*(matrix + j + ((i - 1) * 6)) = -3;
			}
			j++;
		}
		i++;
	}
	emptyfillblockrepeat(matrix);
}

int	blockthreerowcol(int *matrix, int mult)
{
	int	i;
	int	cont;

	i = 1;
	cont = 0;
	while (i <= 4)
	{
		if (*(matrix + (i * mult)) == 3)
		{
			i = 0;
			while (i++ < 4)
			{
				if (*(matrix + (i * mult)) == 0)
				{
					*(matrix + (i * mult)) = -3;
					cont++;
				}
			}
		}
		i++;
	}
	return (cont);
}

void	fillthree(int *matrix, int mult)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
	{
		j += *(matrix + (i * mult));
		i++;
	}
	i = 1;
	while (*(matrix + (i * mult)) != 0)
		i++;
	if ((j == -2) || (j == -3) || (j == -4) || (j == -5))
		*(matrix + (i * mult)) = 3;
}

int	emptythree(int *matrix, int mult)
{
	int	i;
	int	j;

	i = 1;
	j = 4;
	while (i <= 4)
	{
		if (*(matrix + (i * mult)) != 0)
			j--;
		i++;
	}
	if (j == 1)
	{
		fillthree(matrix, mult);
		return (1);
	}
	return (0);
}

void	blockallthree(int *matrix)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	blockthree(matrix);
	while (++i <= 4)
		count += blockthreerowcol(matrix + (i * 6), 1);
	i = 0;
	while (++i <= 4)
		count += blockthreerowcol(matrix + i, 6);
	if (count > 0)
		blockallthree(matrix);
	i = 0;
	blockthree(matrix);
	while (++i <= 4)
		emptythree(matrix + (i * 6), 1);
	i = 0;
	while (++i <= 4)
		emptythree(matrix + i, 6);
}
