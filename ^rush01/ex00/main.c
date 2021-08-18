/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsanfeli <jsanfeli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:41:50 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/08/15 23:36:30 by jsanfeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

/* ******************************* PROTOTIPOS ******************************* */

void	ft_putmatrix(int *matrix);
void	rush(int *matrix);
void	fillall(int *matrix);
void	ft_putchar(char c);
void	ft_putstr(char *c);
int		imposible(int *matrix);

/* ******************************* FUNCIONES ******************************** */

void	readstr(char *argv, int *matrix)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(argv + i) != '\0')
	{
		if ((*(argv + i) - '0' > 0) && (*(argv + i) - '0' < 5) && (j < 16))
		{
			if (j / 4 == 0)
				*(matrix + j % 4 + 1) = *(argv + i) - '0';
			else if (j / 4 == 1)
				*(matrix + 5 + ((j % 4 + 1) * 6)) = *(argv + i) - '0';
			else if (j / 4 == 2)
				*(matrix + 0 + ((j % 4 + 1) * 6)) = *(argv + i) - '0';
			else
				*(matrix + j % 4 + 1 + (5 * 6)) = *(argv + i) - '0';
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	table[6][6];
	int	i;
	int	j;

	i = -1;
	while (i++ < 6)
	{
		j = -1;
		while (++j < 6)
			table[i][j] = 0;
	}
	if (argc == 2)
	{
		readstr(argv[1], &table[0][0]);
		rush(&table[0][0]);
		if (imposible(&table[0][0]) == 0)
			ft_putmatrix(&table[0][0]);
		else
			ft_putstr("Error. Parece que esta configuración no es correcta");
	}
	else
	{
		ft_putstr("Cantidad de argumentos no valida, intentelo de nuevo");
	}
	return (0);
}

int	imposible(int *matrix)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (i++ < 4)
	{
		k = 0;
		while (j++ < 4)
		{
			k += *(matrix + j + (i * 6));
		}
		if (k != 10)
			return (0);
	}
	return (1);
}
