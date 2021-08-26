/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:33:42 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/11 16:35:27 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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

    result = ft_str_is_lowercase("asfa");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("999");
    printf("Result: %d\n", result);

    result = ft_str_is_lowercase("");
    printf("Result: %d\n", result);
    
    return 0;
}