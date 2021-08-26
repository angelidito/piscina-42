/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 13:15:47 by jsanfeli          #+#    #+#             */
/*   Updated: 2021/08/15 18:33:53 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
  unsigned int i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (0);
}

int main(void) {
  char dest[10];
  char dest1[10];
  char *src = "5 eses";
  
  ft_strlcpy(dest ,src, 8);
  strlcpy(dest1,src, 8);

  printf("%s", dest);
  printf("\n");
  printf("%s", dest1);
  return 0;
}
