/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emptyfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 01:55:24 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/15 23:23:16 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

/* ******************************* PROTOTIPOS ******************************* */

int		empty(int *matrix, int mult);
int		emptyblock(int *matrix, int mult);
void	fill(int *matrix, int mult);

/* ******************************* FUNCIONES ******************************** */

void	emptyfillblockrepeat(int *matrix)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (++i <= 4)
		count += emptyblock(matrix + (i * 6), 1);
	i = 0;
	while (++i <= 4)
		count += emptyblock(matrix + i, 6);
	if (count > 0)
		emptyfillblockrepeat(matrix);
}

void	emptyfillrepeat(int *matrix)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (++i <= 4)
		count += empty(matrix + (i * 6), 1);
	i = 0;
	while (++i <= 4)
		count += empty(matrix + i, 6);
	if (count > 0)
		emptyfillrepeat(matrix);
}

int	emptyblock(int *matrix, int mult)
{
	int	i;
	int	j;

	i = 1;
	j = 4;
	while (i <= 4)
	{
		if ((*(matrix + (i * mult)) != 0) || (*(matrix + (i * mult)) != -3))
			j--;
		i++;
	}
	if (j == 1)
	{
		fill(matrix, mult);
		return (1);
	}
	return (0);
}

int	empty(int *matrix, int mult)
{
	int	i;
	int	j;

	i = 1;
	j = 4;
	while (i <= 4)
	{
		if ((*(matrix + (i * mult)) != 0) && (*(matrix + (i * mult)) != -3))
			j--;
		i++;
	}
	if (j == 1)
	{
		fill(matrix, mult);
		return (1);
	}
	return (0);
}

void	fill(int *matrix, int mult)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= 4)
	{
		if (*(matrix + (i * mult)) != -3)
			j += *(matrix + (i * mult));
		i++;
	}
	i = 1;
	while ((*(matrix + (i * mult)) != 0) && (*(matrix + (i * mult)) != -3))
		i++;
	if (j == 6)
		*(matrix + (i * mult)) = 4;
	else if (j == 7)
		*(matrix + (i * mult)) = 3;
	else if (j == 8)
		*(matrix + (i * mult)) = 2;
	else if (j == 9)
		*(matrix + (i * mult)) = 1;
}
