#include <stdio.h>
#include <stdlib.h>

int	is_permitted_char(char c)
{
	return (c >= '0' && c <= '9');
}

void	atoi_logic(char *str, int *status, unsigned int *num, int *mult)
{
	if (*status == 0 && *str == ' ')
		;
	else if (*status == 2 && *str == ' ')
		*status = -1;
	else if (!is_permitted_char(*str))
		*status = -1;
	else if (is_permitted_char(*str))
	{
		*status = 1;
		if (*status == 1 && !is_permitted_char(*str))
			*status = -1;
		else if (*str >= '0' && *str <= '9')
		{
			*num = (*num + *str - '0') * 10;
			*status = 2;
		}
	}
}

unsigned int	ft_atoi(char *str)
{
	int					multiplier;
	int					status;
	unsigned int		num;

	multiplier = 1;
	status = 0;
	num = 0;
	while (status != -1 && *str)
	{
		atoi_logic(str, &status, &num, &multiplier);
		str++;
	}
	num /= 10;
	return (num * multiplier);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", atoi(argv[1]));
	return (0);
}
