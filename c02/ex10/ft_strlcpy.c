/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 18:13:51 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/17 20:28:46 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sum;

	sum = -1;
	while (src[++sum] != '\0')
		;
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
			dest[i] = src[i++];
		dest[i] = '\0';
	}
	return (sum);
}
