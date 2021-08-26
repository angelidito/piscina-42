#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write (1, &a, 1);
	write (1, &b, 1);
}

void	ft_putint(int n, int max)
{
	char	u;
	char	d;

	if (n < 10)
	{
		u = n + 48;
		ft_putchar('0', u);
	}
	else if (n <= max)
	{
		u = (n % 10) + 48;
		d = (n / 10) + 48;
		ft_putchar(d, u);
	}
}

void	ft_catint(int fir, int sec)
{
	ft_putint(fir, 98);
	write(1, " ", 1);
	ft_putint (sec, 99);
	if (fir != 98 || sec != 99)
		ft_putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	int	p;
	int	s;

	p = 0;
	while (p <= 98)
	{
		s = p + 1;
		while (s <= 99)
		{
			ft_catint(p, s);
			s++;
		}
		p++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
