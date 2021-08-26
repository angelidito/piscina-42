/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmarti <angmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:37:41 by angmarti          #+#    #+#             */
/*   Updated: 2021/08/25 18:37:43 by angmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
​
int main ()
{
	/***************EX00***************/
	printf("\n--------------Ex 00---------------\n\n");
	char *string00_1 = "";
	printf("\nTest 1\n");
	printf("%lu\n", strlen(string00_1));
	printf("%d\n", ft_strlen(string00_1));
​
	char *string00_2 = "size 6";
	printf("\nTest 2\n");
	printf("%lu\n", strlen(string00_2));
	printf("%d\n", ft_strlen(string00_2));
​
	char *string00_3 = "\0size 0";
	printf("\nTest 3\n");
	printf("%lu\n", strlen(string00_3));
	printf("%d\n", ft_strlen(string00_3));
​
	char string00_4[9] = "";
	printf("%s", string00_4);
	printf("\nTest 3\n");
	printf("%lu\n", strlen(string00_4));
	printf("%d\n", ft_strlen(string00_4));
​
	/***************EX01***************/
	printf("\n--------------Ex 01---------------\n\n");
​
	char *string01_1 = "Hello World";
	printf("\nTest 1\n");
	ft_putstr(string01_1);
	printf(" should be Hello World\n");
	char *string01_2 = "\0gahjskd";
	printf("\nTest 2\n");
	ft_putstr(string01_2);
	printf(" should be \n");
	char *string01_3 = "0";
	printf("\nTest 3\n");
	ft_putstr(string01_3);
	printf(" should be 0\n");
	char *string01_4 = "";
	printf("\nTest 4\n");
	ft_putstr(string01_4);
	printf(" should be \n");
​
	/***************EX02***************/
	printf("\n--------------Ex 02---------------\n\n");
​
	printf("\nTest 1\n");
	int n02_1 = 0;
	ft_putnbr(n02_1);
	printf(" should be %d\n", n02_1);
​
	printf("\nTest 2\n");
	int n02_2 = 10;
	ft_putnbr(n02_2);
	printf(" should be %d\n", n02_2);
​
	printf("\nTest 3\n");
	int n02_3 = 55;
	ft_putnbr(n02_3);
	printf(" should be %d\n", n02_3);
​
	printf("\nTest 4\n");
	int n02_4 = INT32_MAX;
	ft_putnbr(n02_4);
	printf(" should be %d\n", n02_4);
​
	printf("\nTest 5\n");
	int n02_5 = -1;
	ft_putnbr(n02_5);
	printf(" should be %d\n", n02_5);
​
	printf("\nTest 6\n");
	int n02_6 = -10;
	ft_putnbr(n02_6);
	printf(" should be %d\n", n02_6);
​
	printf("\nTest 7\n");
	int n02_7 = -55;
	ft_putnbr(n02_7);
	printf(" should be %d\n", n02_7);
​
	printf("\nTest 8\n");
	int n02_8 = INT32_MIN;
	ft_putnbr(n02_8);
	printf(" should be %d\n", n02_8);
​
	/***************EX03***************/
	printf("\n--------------Ex 03---------------\n\n");
​
	printf("\nTest 1\n");
	int n03_1 = 10;
	ft_putnbr(ft_atoi("10"));
	printf(" should be %d\n", n03_1);
​
	printf("\nTest 2\n");
	int n03_2 = -10;
	ft_putnbr(ft_atoi("-10"));
	printf(" should be %d\n", n03_2);
​
	printf("\nTest 3\n");
	int n03_3 = 0;
	ft_putnbr(ft_atoi("0"));
	printf(" should be %d\n", n03_3);
​
	printf("\nTest 4\n");
	int n03_4 = -100;
	ft_putnbr(ft_atoi("-+100"));
	printf(" should be %d\n", n03_4);
​
	printf("\nTest 5\n");
	int n03_5 = 10;
	ft_putnbr(ft_atoi("+--10"));
	printf(" should be %d\n", n03_5);
​
	printf("\nTest 6\n");
	int n03_6 = -10;
	ft_putnbr(ft_atoi("-+--10"));
	printf(" should be %d\n", n03_6);
​
	printf("\nTest 7\n");
	int n03_7 = 10;
	ft_putnbr(ft_atoi("--+--10"));
	printf(" should be %d\n", n03_7);
​
	printf("\nTest 8\n");
	int n03_8 = 10;
	ft_putnbr(ft_atoi(" 10"));
	printf(" should be %d\n", n03_8);
​
	printf("\nTest 9\n");
	int n03_9 = -10;
	ft_putnbr(ft_atoi("      -10"));
	printf(" should be %d\n", n03_9);
​
	printf("\nTest 10\n");
	int n03_10 = 10;
	ft_putnbr(ft_atoi("10-"));
	printf(" should be %d\n", n03_10);
​
	printf("\nTest 11\n");
	int n03_11 = 1;
	ft_putnbr(ft_atoi("1 0"));
	printf(" should be %d\n", n03_11);
​
	printf("\nTest 12\n");
	int n03_12 = 10;
	ft_putnbr(ft_atoi("10 0"));
	printf(" should be %d\n", n03_12);
​
	printf("\nTest 13\n");
	int n03_13 = 0;
	ft_putnbr(ft_atoi("-k10"));
	printf(" should be %d\n", n03_13);
​
	printf("\nTest 14\n");
	int n03_14 = 1;
	ft_putnbr(ft_atoi("1h0"));
	printf(" should be %d\n", n03_14);
​
	printf("\nTest 15\n");
	int n03_15 = 0;
	ft_putnbr(ft_atoi(" o   10"));
	printf(" should be %d\n", n03_15);
​
	printf("\nTest 16\n");
	int n03_16 = 0;
	ft_putnbr(ft_atoi(""));
	printf(" should be %d\n", n03_16);
​
	printf("\nTest 17\n");
	int n03_17 = 1325632167;
	ft_putnbr(ft_atoi("1325632167"));
	printf(" should be %d\n", n03_17);
​
	/***************EX04***************/
	printf("\n--------------Ex 04---------------\n\n");
​
	printf("\nTest 1\n");
	ft_putnbr_base(-10,"01");
	printf(" should be -1010\n");
​
	printf("\nTest 2\n");
	ft_putnbr_base(-13,"012");
	printf(" should be -111\n");
​
	printf("\nTest 3\n");
	ft_putnbr_base(-10,"01234");
	printf(" should be -20\n");
​
	printf("\nTest 4\n");
	ft_putnbr_base(-150,"0123456789ABCDEF");
	printf(" should be -96\n");
​
	printf("\nTest 5\n");
	ft_putnbr_base(-1042,"poniguay");
	printf(" should be -npnn\n");
​
	printf("\nTest 6\n");
	ft_putnbr_base(20049,"01");
	printf(" should be 100111001010001\n");
​
	printf("\nTest 7\n");
	ft_putnbr_base(10,"012");
	printf(" should be 101\n");
​
	printf("\nTest 8\n");
	ft_putnbr_base(56,"01234");
	printf(" should be 211\n");
​
	printf("\nTest 9\n");
	ft_putnbr_base(999,"0123456789ABCDEF");
	printf(" should be 3E7\n");
​
	printf("\nTest 10\n");
	ft_putnbr_base(5,"poniguay");
	printf(" should be u\n");
​
	printf("\nTest 11\n");
	ft_putnbr_base(0,"01");
	printf(" should be 0\n");
​
	printf("\nTest 12\n");
	ft_putnbr_base(0,"012");
	printf(" should be 0\n");
​
	printf("\nTest 13\n");
	ft_putnbr_base(0,"01234");
	printf(" should be 0\n");
​
	printf("\nTest 14\n");
	ft_putnbr_base(0,"0123456789ABCDEF");
	printf(" should be 0\n");
​
	printf("\nTest 15\n");
	ft_putnbr_base(0,"poniguay");
	printf(" should be p\n");
​
	printf("\nTest 16\n");
	ft_putnbr_base(INT32_MAX,"0123456789ABCDEF");
	printf(" should be 7FFFFFFF\n");
​
	printf("\nTest 17\n");
	ft_putnbr_base(INT32_MIN,"0123456789ABCDEF");
	printf(" should be -80000000\n");
​
	printf("\nTest 18\n");
	ft_putnbr_base(1,"0123456789ABCDE4");
	printf(" should be empty\n");
​
	printf("\nTest 19\n");
	ft_putnbr_base(1,"1");
	printf(" should be empty\n");
​
	printf("\nTest 20\n");
	ft_putnbr_base(1,"01234567-9ABCDEF");
	printf(" should be empty\n");
​
	printf("\nTest 21\n");
	ft_putnbr_base(1,"0123456789ABCD-2");
	printf(" should be empty\n");
​
	printf("\nTest 22\n");
	ft_putnbr_base(1,"");
	printf(" should be empty\n");
	return (0);
}
