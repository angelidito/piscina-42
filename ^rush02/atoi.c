#include <stdio.h>
#include <stdlib.h>

int	is_permitted_char(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_whitespace(char c)
{
	return (c == 32 || (c <= 13 && c >= 9));
}

void	atoi_logic(char *str, int *status, unsigned int *num)
{
	if (*status == 0 && is_whitespace(*str))
		;
	else if (*status == 1 && is_whitespace(*str))
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
		}
	}
	else if (*str == '\0')
		*status = 2;
}

unsigned int	ft_atoi(char *str)
{
	int					status;
	unsigned int		num;

	status = 0;
	num = 0;
	while (status != -1 && status != 2 && *str)
	{
		atoi_logic(str, &status, &num);
		str++;
	}
	if (status == -1)
		return (0);
	num /= 10;
	return (num);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", atoi(argv[1]));
	return (0);
}
