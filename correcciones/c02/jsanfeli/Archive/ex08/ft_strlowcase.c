/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:15:07 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/12 10:21:12 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strupcase(char *str);

char    *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char source[] = "HoLA QUe TaL";
	char *test = ft_strupcase(source);
    for (int k = 0; test[k] != '\0'; k++)
    {
        printf("%c", test[k]);
    }
    return (0);
}
