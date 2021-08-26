/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 16:31:38 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/11 16:38:07 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '32' || str[i] > '254')
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

    result = ft_str_is_numeric("1232");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("QWERTY");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("asdf1234");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("999");
    printf("Result: %d\n", result);

    result = ft_str_is_numeric("");
    printf("Result: %d\n", result);
    
    return 0;
}