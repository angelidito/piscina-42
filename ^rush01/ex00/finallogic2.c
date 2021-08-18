/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finallogic2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 23:07:51 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/08/15 23:33:29 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	doscuatrotres(int *matrix, int i, int j);
void	trescuatrodos(int *matrix, int i, int j);
void	tresdoscuatro(int *matrix, int i, int j);
void	fulln(int *matrix, int n);
void	blockallthree(int *matrix);
void	emptyfillrepeat(int *matrix);

void	trescutrotres(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 3)
	{
		if ((*(matrix + j + 3 + (i * 6)) == 4) && (j == 0))
		{
			if (*(matrix + j + 4 + (i * 6)) == 3)
				*(matrix + j + 1 + (i * 6)) = 1;
		}
		else if ((*(matrix + j - 3 + (i * 6)) == 4) && (j == 5))
		{
			if (*(matrix + j - 4 + (i * 6)) == 3)
				*(matrix + j - 1 + (i * 6)) = 1;
		}
		else if ((*(matrix + j + ((i + 3) * 6)) == 4) && (i == 0))
		{
			if (*(matrix + j + (i + 4 * 6)) == 3)
				*(matrix + j + ((i + 1) * 6)) = 1;
		}
		else if ((*(matrix + j + ((i - 3) * 6)) == 4) && (i == 5))
		{
			if (*(matrix + j + (i - 4 * 6)) == 3)
				*(matrix + j + ((i - 2) * 6)) = 1;
		}
	}
}

void	trestrescuatro(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 3)
	{
		if ((*(matrix + j + 3 + (i * 6)) == 3) && (j == 0))
		{
			if (*(matrix + j + 4 + (i * 6)) == 4)
				*(matrix + j + 1 + (i * 6)) = 2;
		}
		else if ((*(matrix + j - 3 + (i * 6)) == 3) && (j == 5))
		{
			if (*(matrix + j - 4 + (i * 6)) == 4)
				*(matrix + j - 1 + (i * 6)) = 2;
		}
		else if ((*(matrix + j + ((i + 3) * 6)) == 3) && (i == 0))
		{
			if (*(matrix + j + (i + 4 * 6)) == 4)
				*(matrix + j + ((i + 1) * 6)) = 2;
		}
		else if ((*(matrix + j + ((i - 3) * 6)) == 3) && (i == 5))
		{
			if (*(matrix + j + (i - 4 * 6)) == 4)
				*(matrix + j + ((i - 1) * 6)) = 2;
		}
	}
}

void	tresdoscuatro2(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 3)
	{
		if ((*(matrix + j + 1 + (i * 6)) == 2) && (j == 0))
		{
			if (*(matrix + j + 3 + (i * 6)) == 4)
				*(matrix + j + 1 + (i * 6)) = 2;
		}
		else if ((*(matrix + j - 1 + (i * 6)) == 2) && (j == 5))
		{
			if (*(matrix + j - 3 + (i * 6)) == 4)
				*(matrix + j - 1 + (i * 6)) = 2;
		}
		else if ((*(matrix + j + ((i + 1) * 6)) == 2) && (i == 0))
		{
			if (*(matrix + j + (i + 3 * 6)) == 4)
				*(matrix + j + ((i + 1) * 6)) = 2;
		}
		else if ((*(matrix + j + ((i - 1) * 6)) == 2) && (i == 5))
		{
			if (*(matrix + j + (i - 3 * 6)) == 4)
				*(matrix + j + ((i - 1) * 6)) = 1;
		}
	}
}

void	finalalllogic(int *matrix, int i, int j)
{
	fulln(matrix, 4);
	blockallthree(matrix);
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			doscuatrotres(matrix, i, j);
			trescuatrodos(matrix, i, j);
			tresdoscuatro(matrix, i, j);
			trescutrotres(matrix, i, j);
			trestrescuatro(matrix, i, j);
			tresdoscuatro2(matrix, i, j);
			j++;
		}
		i++;
	}
	emptyfillrepeat(matrix);
}
