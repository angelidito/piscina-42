/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basiclogic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 01:57:08 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/15 23:31:03 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

/* ******************************* PROTOTIPOS ******************************* */

void	cuatro(int *matrix, int i, int j);
void	uno(int *matrix, int i, int j);
void	dostres(int *matrix, int i, int j);
void	dosuno(int *matrix, int i, int j);
void	emptyfillblockrepeat(int *matrix);
void	emptyfillrepeat(int *matrix);
void	fulln(int *matrix, int n);
void	putn(int *matrix, int n);
int		countn(int *matrix, int n);
void	blockallthree(int *matrix);
void	blockthree(int *matrix);
int		blockthreerowcol(int *matrix, int mult);
int		emptythree(int *matrix, int mult);
void	fillthree(int *matrix, int mult);
void	finalalllogic(int *matrix, int i, int j);

/* ******************************* FUNCIONES ******************************** */

void	basiclogic(int *matrix)
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			uno(matrix, i, j);
			cuatro(matrix, i, j);
			dostres(matrix, i, j);
			dosuno(matrix, i, j);
			j++;
		}
		i++;
	}
	emptyfillblockrepeat(matrix);
	finalalllogic(matrix, i, j);
}

void	uno(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 1)
	{
		if (i == 0)
			*(matrix + j + ((i + 1) * 6)) = 4;
		else if (j == 0)
			*(matrix + j + 1 + (i * 6)) = 4;
		else if (i == 5)
			*(matrix + j + ((i - 1) * 6)) = 4;
		else if (j == 5)
			*(matrix + j - 1 + (i * 6)) = 4;
	}
}

void	cuatro(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 4)
	{
		if (i == 0)
			while (++i <= 4)
				*(matrix + j + (i * 6)) = i;
		else if (j == 0)
			while (++j <= 4)
				*(matrix + j + (i * 6)) = j;
		else if (i == 5)
			while (--i >= 1)
				*(matrix + j + (i * 6)) = 5 - i;
		else if (j == 5)
			while (--j >= 1)
				*(matrix + j + (i * 6)) = 5 - j;
	}
}

void	dosuno(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 2)
	{
		if ((*(matrix + j + 5 + (i * 6)) == 1) && (j == 0))
		{
			*(matrix + j + 1 + (i * 6)) = 3;
			*(matrix + j + 4 + (i * 6)) = 4;
		}
		else if ((*(matrix + j - 5 + (i * 6)) == 1) && (j == 5))
		{
			*(matrix + j - 1 + (i * 6)) = 3;
			*(matrix + j - 4 + (i * 6)) = 4;
		}
		else if ((*(matrix + j + ((i + 5) * 6)) == 1) && (i == 0))
		{
			*(matrix + j + ((i + 1) * 6)) = 3;
			*(matrix + j + ((i + 4) * 6)) = 4;
		}
		else if ((*(matrix + j + ((i - 5) * 6)) == 1) && (i == 5))
		{
			*(matrix + j + ((i - 1) * 6)) = 3;
			*(matrix + j + ((i - 4) * 6)) = 4;
		}
	}
}

void	dostres(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 2)
	{
		if ((*(matrix + j + 5 + (i * 6)) == 3) && (j == 0))
			*(matrix + j + 2 + (i * 6)) = 4;
		else if ((*(matrix + j - 5 + (i * 6)) == 3) && (j == 5))
			*(matrix + j - 2 + (i * 6)) = 4;
		else if ((*(matrix + j + ((i + 5) * 6)) == 3) && (i == 0))
			*(matrix + j + ((i + 2) * 6)) = 4;
		else if ((*(matrix + j + ((i - 5) * 6)) == 3) && (i == 5))
			*(matrix + j + ((i - 2) * 6)) = 4;
	}
}
