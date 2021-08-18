/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 15:47:43 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:14:45 by angmarti         ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] -= 32;
	while (str[++i] != '\0')
		if ('a' <= str[i] && str[i] <= 'z')
			if (str[i - 1] < '0' || ('9' < str[i - 1] && str[i - 1] < 'A')
				|| ('Z' < str[i - 1] && str[i - 1] < 'a')
				|| 'z' < str[i - 1])
				str[i] -= 32;
	return (str);
}

// int	main(void)
// {
// 	char str[] 
//= "saLut, comMent TU vas ? 42mots ??sdfgd quar{ant}e-deux; cinquante+et+un";

// 	printf("Original: %s\n", str);
// 	printf("   Nueva: %s\n", ft_strcapitalize(&str[0]));
// }
