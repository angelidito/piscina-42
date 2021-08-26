/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:18:38 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 00:41:52 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);
int		ft_ckeck_base(char *base);

void	ft_putnbr_base_aux(int nbr, char *base, char str[], int k)
{
	int		i;
	int		negativo;
	long	num;

	num = nbr;
	if (nbr < 0)
	{
		num *= -1;
		negativo = 1;
	}
	i = -1;
	while (i++ < 35)
		str[i] = ' ';
	i = 0;
	while (num >= k && i < 32)
	{
		str[32 - i] = base[num % k];
		num /= k;
		i++;
	}
	str[32 - i++] = base[num];
	if (negativo)
		str[32 - i] = '-';
}

int	ckeck_base(char *base)
{
	int		base_ok;
	int		i;
	int		j;

	i = -1;
	base_ok = 1;
	if (base[0] == '\0' || base[1] == '\0')
		base_ok = 0;
	while (base[++i] && base_ok)
	{
		if (*base == '+' || *base == '-')
			base_ok = 0;
		j = i;
		while (base[++j] && base_ok)
			if (base[i] == base[j])
				base_ok = 0;
	}
	return (base_ok);
}

char	*ft_putnbr_base(int nbr, char *base, char s[])
{
	int		i;
	int		j;
	int		k;
	int		base_ok;

	base_ok = ckeck_base(base);
	if (base_ok)
	{
		k = 0;
		while (base[k])
			k++;
		ft_putnbr_base_aux(nbr, base, s, k);
		i = 34;
		// while (s[i] == ' ' && i < 32)
		// 	i++;
		j = 0;
		// while (--i >= 0){
		// 	// printf("i: %d\tc: '%c'\n", i, s[i]);

		// }
		// printf("\n%s\n", s);
	}
	return (s);
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
		if (!(status == 0 && *str == ' ')
			&& status == 1 && !(*str >= '0' && *str <= '9'))
			status = -1;
		else if (!(status == 0 && *str == ' ')
			&& ((*str >= '0' && *str <= '9') || *str == '-'))
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
	char	nbr_str[35];

	nbr = ft_atoi(str);
	printf("Primer atoi: %d\n", nbr);
	printf("Number base: %s\n", ft_putnbr_base(nbr, base, nbr_str));
	ft_atoi(ft_putnbr_base(nbr, base, nbr_str));
	printf("Second atoi: %d\n", ft_atoi(ft_putnbr_base(nbr, base, nbr_str)));
	return (ft_atoi(ft_putnbr_base(nbr, base, nbr_str)));
}

int	main(void)
{
	int	n;
	
	n = ft_atoi_base("-123456", "01234567");
	// printf("%d\n", n);
}
