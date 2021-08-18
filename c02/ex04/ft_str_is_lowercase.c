/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:22:10 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:13:59 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] > 'z' || str[i] < 'a')
			return (0);
	return (1);
}

// int	main(void)
// {
// 	char	str[5] = "adf";

// 	printf("%d - %s\n", ft_str_is_lowercase(&str[0]), str);
// }
