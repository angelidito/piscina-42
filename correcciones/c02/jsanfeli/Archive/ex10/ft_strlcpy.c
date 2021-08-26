/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:29:06 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/14 11:33:21 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
