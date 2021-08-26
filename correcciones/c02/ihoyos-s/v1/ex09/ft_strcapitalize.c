/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 13:19:49 by ihoyos-s          #+#    #+#             */
/*   Updated: 2021/08/26 12:49:21 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (!((str[i - 1] >= '0' && str[i - 1] <= '9')
					|| (str[i - 1] >= 'a' && str[i - 1] <= 'z')
					|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
int	main(void)
{
	char str[] 
= "saLut, comMent TU vas ? 42mots ??sdfgd quar{ant}e-deux; cinquante+et+un";

	printf("Original: %s\n", str);
	printf("   Nueva: %s\n", ft_strcapitalize(&str[0]));
}