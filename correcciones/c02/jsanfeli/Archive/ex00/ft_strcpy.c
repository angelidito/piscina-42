/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcordoba <hcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:07:01 by hcordoba          #+#    #+#             */
/*   Updated: 2021/08/11 11:36:34 by hcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	str1[] = "Flavio";
	char	str2[] = "Gaucho";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
}
