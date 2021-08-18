/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finallogic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:47:01 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/15 23:32:33 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	doscuatrotres(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 2)
	{
		if ((*(matrix + j + 3 + (i * 6)) == 4) && (j == 0))
		{
			if (*(matrix + j + 4 + (i * 6)) == 3)
				*(matrix + j + 1 + (i * 6)) = 2;
		}
		else if ((*(matrix + j - 3 + (i * 6)) == 4) && (j == 5))
		{
			if (*(matrix + j - 4 + (i * 6)) == 3)
				*(matrix + j - 1 + (i * 6)) = 2;
		}
		else if ((*(matrix + j + ((i + 3) * 6)) == 4) && (i == 0))
		{
			if (*(matrix + j + (i + 4 * 6)) == 3)
				*(matrix + j + ((i + 1) * 6)) = 2;
		}
		else if ((*(matrix + j + ((i - 3) * 6)) == 4) && (i == 5))
		{
			if (*(matrix + j + (i - 4 * 6)) == 3)
				*(matrix + j + ((i - 1) * 6)) = 2;
		}
	}
}

void	trescuatrodos(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 3)
	{
		if ((*(matrix + j + 3 + (i * 6)) == 4) && (j == 0))
		{
			if (*(matrix + j + 4 + (i * 6)) == 2)
				*(matrix + j + 1 + (i * 6)) = 1;
		}
		else if ((*(matrix + j - 3 + (i * 6)) == 4) && (j == 5))
		{
			if (*(matrix + j - 4 + (i * 6)) == 2)
				*(matrix + j - 1 + (i * 6)) = 1;
		}
		else if ((*(matrix + j + ((i + 3) * 6)) == 4) && (i == 0))
		{
			if (*(matrix + j + (i + 4 * 6)) == 2)
				*(matrix + j + ((i + 1) * 6)) = 1;
		}
		else if ((*(matrix + j + ((i - 3) * 6)) == 4) && (i == 5))
		{
			if (*(matrix + j + (i - 4 * 6)) == 2)
				*(matrix + j + ((i - 1) * 6)) = 1;
		}
	}
}

void	tresdoscuatro(int *matrix, int i, int j)
{
	if (*(matrix + j + (i * 6)) == 3)
	{
		if ((*(matrix + j + 3 + (i * 6)) == 2) && (j == 0))
		{
			if (*(matrix + j + 4 + (i * 6)) == 4)
				*(matrix + j + 1 + (i * 6)) = 1;
		}
		else if ((*(matrix + j - 3 + (i * 6)) == 2) && (j == 5))
		{
			if (*(matrix + j - 4 + (i * 6)) == 4)
				*(matrix + j - 1 + (i * 6)) = 1;
		}
		else if ((*(matrix + j + ((i + 3) * 6)) == 2) && (i == 0))
		{
			if (*(matrix + j + (i + 4 * 6)) == 4)
				*(matrix + j + ((i + 1) * 6)) = 1;
		}
		else if ((*(matrix + j + ((i - 3) * 6)) == 2) && (i == 5))
		{
			if (*(matrix + j + (i - 4 * 6)) == 4)
				*(matrix + j + ((i - 1) * 6)) = 1;
		}
	}
}
