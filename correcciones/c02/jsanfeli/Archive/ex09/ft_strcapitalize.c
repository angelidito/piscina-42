/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:31:20 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/12 11:49:30 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str)
{
    int i;
    int comienz;
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