
#include <stdio.h>
#include <unistd.h>
//#include <stdlib.h>
#include <string.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex05/ft_split.c"

char *ft_strdup(char *src);
int ft_ultimate_range(int **range, int min, int max);
int *ft_range(int min, int max);
char *ft_strjoin(int size, char **strs, char *sep);
char **ft_split(char *str, char *charset);

int main(void)
{
	
	// //ex00
	
	// char *j = "pepe123";
	// printf("Original %s\n", strdup(j));
	// printf("Fake %s\n", ft_strdup(j));

	
//ex01

	// printf("ex01\n");
	// int i = 0;
	// printf("null?: %p\n", (ft_range(11,5)));
	// while (i < 16)
	// {
	// 	printf("%d, ", ft_range(-11,5)[i]);
	// 	i++;
	// }

// 	//ex02
// 	printf("\nex02\n");
// 	int	**h;
// 	int *as;
// 	int k;

// 	k = 0;
// 	h = (int **)malloc(sizeof(int *));
// //	printf("null?: %p\n", (ft_ultimate_range(11,5)));
// 	int size = ft_ultimate_range(h, 1, 3);
// //	size = 0;
// 	as = *h;


// 	printf("size: %i\n", size);
// 	printf("%p, ", *h);
// 	while (k < size)
// 	{
// 		printf("%i, ", as[k]);
// 		k++;
// 	}

	// //ex03
	// //

	// char **j1;
	// int z;
	// z = 6;

	// j1 = (char **)malloc(sizeof(char *) * z);
	// int a;
	// a = 0;
	// while (a < z)
	// {
	// 	j1[a] = (char *)malloc(3 * sizeof(char));
	// 	j1[a][0] = 'z';
	// 	j1[a][1] = 'a';
	// 	j1[a][2] = '\0';
	// 	a++;
	// }
	// ft_strjoin(z, j1, ",,,,");
	// printf("%s",ft_strjoin(z, j1, " , "));
	// a = 0;
	// while (a < z)
	// {
	// 	free(j1[a]);
	// 	a++;
	// }
	// free(j1);
//	free(ft_strjoin(z, j1, ", "));
//	free(j1);
//	system("leaks a.out");

/*	while (ft_strjoin(3, j1, " ")[f])
	{	
		printf("%c", ft_strjoin[f]);
		f++;
	}
*/

//ex05
//

	char 	**p;
	int		i;

	i = 0;
	p = ft_split("0213412", "13");
	while(p[i])
	{
		printf("%s, ", p[i]); 
		i++;	
	}
//	system("leaks a.out");


}
