/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:35:59 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/11 18:10:34 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}



int main()
{
    int result;

    result = ft_str_is_uppercase("asfa");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("999");
    printf("Result: %d\n", result);

    result = ft_str_is_uppercase("");
    printf("Result: %d\n", result);
    
    return 0;
}