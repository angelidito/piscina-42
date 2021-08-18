/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:22:10 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:14:13 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] == 127 || str[i] < 32)
			return (0);
	return (1);
}

// int	main(void)
// {
// 	char	str[5] = "adf";

// 	printf("%d - %s\n", ft_str_is_printable(&str[0]), str);
// }
