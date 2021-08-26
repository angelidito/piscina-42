/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mal.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:18:38 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 01:55:00 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base_aux(int nbr, char *base, char str[])
{
	int		k;
	int		i;
	long	num;

	num = nbr;
	if (nbr < 0)
	{
		num *= num;
		ft_putchar('-');
	}
	k = ft_strlen(base);
	i = -1;
	while (i++ < 32)
		str[i] = 'x';
	i = 0;
	while (num >= k && i < 32)
	{
		str[i] = base[num % k];
		num /= k;
		i++;
	}
	str[i] = base[num];
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

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	s[32];
	int		base_ok;

	base_ok = ckeck_base(base);
	if (base_ok)
	{
		ft_putnbr_base_aux(nbr, base, s);
		i = 0;
		while (s[i] != 'x' && s[i])
			i++;
		while (--i >= 0)
			ft_putchar(s[i]);
	}
}

int	main(void)
{
	int	n;

	n = -8;
		ft_putnbr_base(n, "-2147483648");
}
