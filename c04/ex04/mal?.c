/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mal?.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 23:57:23 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 01:56:24 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base_aux(int nbr, char *base, char str[])
{
	int		k;
	int		i;
	long	num;

	k = 0;
	while (base[k])
		k++;
	if (nbr < 0)
	{
		num = -nbr;
		write(1, "-", 1);
	}
	else
		num = nbr;
	i = 0;
	while (num >= k && i < 32)
	{
		str[i] = base[num % k];
		num /= k;
		i++;
	}
	str[i] = base[num];
}

int	ft_ckeck_base(char *base)
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
	// int		j;
	char	s[32];
	int		base_ok;

	// num_str[0] = '0';
	// num_str[1] = '\0';
	base_ok = ft_ckeck_base(base);
	i = -1;
	while (i++ < 32)
		base[i] = 'x';
	if (base_ok)
	{
		ft_putnbr_base_aux(nbr, base, s);
		i = 0;
		while (s[i] != 'x' && s[i])
			i++;
		// j = 0;
		while (--i >= 0)
			write(1, &s[i], 1);
		// 	ptr[j++] = s[i];
		// ptr[j] = '\0';
	}
	// printf("Number base: %s\n", ptr);
	// return void;
}

int	main(void)
{
	// int	n;

	// n = -8;
	ft_putnbr_base(2345, "0123456789");
	write(1, "\n", 1);
}
