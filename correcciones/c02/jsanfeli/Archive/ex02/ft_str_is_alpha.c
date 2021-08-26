/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 13:41:38 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/11 13:43:50 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

    result = ft_str_is_alpha("asdf");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("999");
    printf("Result: %d\n", result);

    result = ft_str_is_alpha("");
    printf("Result: %d\n", result);
    
    return 0;
}