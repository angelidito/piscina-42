/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:33:01 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/08/15 18:34:34 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	comienz;

	i = 0;
	comienz = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (comienz == 0)
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'Z' || str[i] <= '0' || (str[i] > 57 && str[i] < 65))
		{
			comienz = -1;
		}
		i++;
		comienz++;
	}
	return (str);
}
int   main(void)
{
  char str[] = "salDSFt, com+nt tu vas ? 42mots quarante-deux; cinquante+et+un";

  printf("\n%s", ft_strcapitalize(str));
  return (0);
}