/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:50:24 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/26 12:41:02 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	x;
	int	i;

	i = 0;
	x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			x = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			x = 1;
		else
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}

int	main(void)
{
	char	str[] = "asdfAAS.-";

	printf("%d - %s\n", ft_str_is_alpha(&str[0]), str);
}
