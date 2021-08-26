/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:18:38 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 02:44:35 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\r' || c == '\f');
}

int	ft_atoi(char *str, int k)
{
	int		multiplier;
	int		status;
	int		num;

	multiplier = 1;
	status = 0;
	num = 0;
	while (status != -1 && *str)
	{
		if (!(status == 0 && ft_isspace(*str)
				&& status == 1 && !(*str >= '0' && *str <= '9')))
			status = -1;
		else if (!(status == 0 && ft_isspace(*str)
				&& ((*str >= '0' && *str <= '9') || *str == '-')))
		{
			status = 1;
			if (*str == '-')
				multiplier *= -1;
			else if (*str >= '0' && *str <= '9')
				num = num * 10 + *str - '0' ;
		}
		str++;
	}
	return (num * multiplier);
}

int	ft_atoi_base(char *str, char *base)
{
	int		nbr;
	int		k;

	k = 0;
	while (base[k])
		k++;
	nbr = ft_atoi(str, k);
	return (nbr);
}

// int	main(void)
// {
// 	int	n;

// 	n = ft_atoi_base("17", "0123456789abcdef");
// 	printf("%x\n", n);
// }
