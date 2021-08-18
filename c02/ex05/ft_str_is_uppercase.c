/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:37:08 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:14:07 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] > 'Z' || str[i] < 'A')
			return (0);
	return (1);
}

// int	main(void)
// {
// 	char	str[5] = "adf";

// 	printf("%d - %s\n", ft_str_is_uppercase(&str[0]), str);
// }
