/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:55:52 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 02:42:28 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// Escriba una función que convierta el principio de la cadena apuntada por 
//   str en un entero de tipo int
// • str puede empezar con un número arbitrario de espacios (tal y como lo 
//   define isspace(3))
// • A continuación, str puede ir seguida de un número arbitrario de signos + 
//   y de signos -. El signo - hará cambiar el signo del entero devuelto en 
//   función del número de signos - y si este es par o impar.
// • Para terminar, str tendrá que estar compuesta por dígitos en base 10
// • Su función tendrá que leer str, siempre que esta última cumpla con las 
//   reglas mencionadas anteriormente, y tendrá que devolver el número 
//   encontrado hasta entonces.
// • No debería tener en cuenta los desbordamientos (overflows y underflows), 
//   en estos casos el resultado se considera indefinido.
// • Puede comparar su función con la verdadera función atoi, quitando la 
//   parte de los signos y del overflow.

int	is_permitted_char(char c)
{
	return (c == '+' || c == '-' || (c >= '0' && c <= '9'));
}

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\r' || c == '\f');
}

void	atoi_logic(char *str, int *status, int *num, int *mult)
{
	if (*status == 0
		&& (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f'))
		;
	else if (*status == 2 && (*str == '-' || *str == '+'
			|| *str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
			|| *str == '\r' || *str == '\f'))
		*status = -1;
	else if (!is_permitted_char(*str))
		*status = -1;
	else if (is_permitted_char(*str))
	{
		*status = 1;
		if (*str == '-')
			*mult *= -1;
		if (*status == 1 && !is_permitted_char(*str))
			*status = -1;
		else if (*str >= '0' && *str <= '9')
		{
			*num = (*num + *str - '0') * 10;
			*status = 2;
		}
	}
}

int	ft_atoi(char *str)
{
	int		multiplier;
	int		status;
	int		num;

	multiplier = 1;
	status = 0;
	num = 0;
	while (status != -1 && *str)
	{
		atoi_logic(str, &status, &num, &multiplier);
		str++;
	}
	num /= 10;
	return (num * multiplier);
}

// int	ft_atoi(char *str)
// {
// 	int		multiplier;
// 	int		status;
// 	int		num;

// 	multiplier = 1;
// 	status = 0;
// 	num = 0;
// 	while (status != -1 && *str)
// 	{
// 		if (!(status == 0 && ft_isspace(*str))
// 			&& status == 1 && !(*str >= '0' && *str <= '9'))
// 			status = -1;
// 		else if (!(status == 0 && ft_isspace(*str))
// 			&& ((*str >= '0' && *str <= '9') || *str == '-'))
// 		{
// 			status = 1;
// 			if (*str == '-')
// 				multiplier *= -1;
// 			else if (*str >= '0' && *str <= '9')
// 				num = num * 10 + *str - '0' ;
// 		}
// 		str++;
// 	}
// 	return (num * multiplier);
// }

// void	test(int test, char *str)
// {
// 	int	expected;
// 	int	obtained;

// 	expected = atoi(str);
// 	obtained = ft_atoi(str);
// 	if (expected != obtained)
// 	{
// 		printf("\nTest %d: Error ?\n", test);
// 	}
// 	else
// 		printf("Test %d: OK!\n", test);
// 	printf("     Attention: manual check is needed if there ");
// 	printf("are more than one consecutive '+' or '-' before numbers\n");
// 	printf("         str: %s\n", str);
// 	printf("Obtained int: %d\n", obtained);
// 	printf("Expected int: %d\n", expected);
// 	printf("\n");
// }

// int	main(void)
// {
// 	int	t;

// 	t = 0;
// 	test(t++, "");
// 	test(t++, "0");
// 	test(t++, "-0");
// 	test(t++, "-1");
// 	test(t++, "1");
// 	test(t++, "+1234");
// 	test(t++, "+12 34");
// 	test(t++, "+12-34");
// 	test(t++, "12 34");
// 	test(t++, "12a34");
// 	test(t++, "12ç34");
// 	test(t++, "a1234");
// 	test(t++, "  -  1234");
// 	test(t++, "+-1234");
// 	test(t++, "-+-1234");
// 	test(t++, "-+--1234");
// 	test(t++, "-+-1-234");
// 	test(t++, "--1");
// 	test(t++, "---1");
// 	return (0);
// }
