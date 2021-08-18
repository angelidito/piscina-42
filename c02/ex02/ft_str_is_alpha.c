/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:33:06 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/16 17:23:02 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] < 'A' || str[i] > 'z' || (str[i] < 'a' && str[i] > 'Z'))
			return (0);
	return (1);
}

// int	main(void)
// {
// 	char	str[5] = "";

// 	printf("%d - %s\n", ft_str_is_alpha(&str[0]), str);
// }
