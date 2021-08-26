#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0' - 1;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
