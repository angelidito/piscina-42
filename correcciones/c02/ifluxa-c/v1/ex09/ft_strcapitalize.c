/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifluxa-c <ifluxa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:57:24 by ifluxa-c          #+#    #+#             */
/*   Updated: 2021/08/15 16:10:50 by ifluxa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (j == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
			j++;
		}
		else if (j > 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 'a' - 'A';
		else if ((str[i] < '0' || (str[i] > '9') && str[i] < 'A')
			|| (str[i] < 'Z' && str[i] < 'a') || (str[i] > 'z'))
			j = 0;
		else
			j++;
		i++;
	}
	return (str);
}
