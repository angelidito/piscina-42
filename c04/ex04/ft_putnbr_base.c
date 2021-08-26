/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base copy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 20:18:38 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 02:43:54 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base_aux(int nbr, char *base, char str[], int k)
{
	int		i;
	long	num;

	num = nbr;
	if (nbr < 0)
	{
		num *= -1;
		write(1, "-", 1);
	}
	i = -1;
	while (i++ < 32)
		str[i] = ' ';
	i = 0;
	while (num >= k && i < 32)
	{
		str[31 - i] = base[num % k];
		num /= k;
		i++;
	}
	str[31 - i++] = base[num];
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
	int		k;
	char	s[32];
	int		base_ok;

	base_ok = ckeck_base(base);
	if (base_ok)
	{
		k = 0;
		while (base[k])
			k++;
		ft_putnbr_base_aux(nbr, base, s, k);
		i = 0;
		while (s[i] == ' ' && i < 32)
			i++;
		while (i < 32)
			write(1, &s[i++], 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr_base(-2147483648, "01");
// 	printf("\n");
// 	ft_putnbr_base(-2147483647, "01");
// 	printf("\n");
// 	ft_putnbr_base(2147483647, "01");
// 	printf("\n");
// 	ft_putnbr_base(-42, "01");
// 	printf("\n");
// 	ft_putnbr_base(0, "01");
// 	printf("\n");
// 	ft_putnbr_base(-0, "01");
// 	printf("\n");
// 	ft_putnbr_base(42, "01");
// 	printf("\n");
// }
