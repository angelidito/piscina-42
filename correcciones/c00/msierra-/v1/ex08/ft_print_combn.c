/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msierra- <msierra-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:18:59 by msierra-          #+#    #+#             */
/*   Updated: 2021/08/10 10:19:00 by msierra-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_combn(int n);

void ft_print_combn(int n)
{
	char c[n];
	if (n < 10)
	{
		ft_putchar(n + 48);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
void	ft_putchar()
{
	write(1, &c, 1);
}
int main()
{
	ft_print_combn(2);
}