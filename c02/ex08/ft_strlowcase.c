/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:38:50 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:14:26 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		if (str[i] <= 'Z' && str[i] >= 'A')
			str[i] += 32;
	return (str);
}

// int	main(void)
// {
// 	char	str[55] = "aAdf!.-´ç*";

// 	printf("Original: %s\n", str);
// 	printf("   Nueva: %s\n", ft_strlowcase(&str[0]));
// }
