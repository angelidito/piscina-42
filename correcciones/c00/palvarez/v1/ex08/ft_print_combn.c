#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_combn(char a, char b, bool last)
{
	ft_putchar(a);
	ft_putchar(b);
	if (last)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_combn(int n)
{
	char	a;
	char	b;
	bool	last;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			last = !(a == '8' && b == '9');
			ft_write_combn(a, b, last);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_sort_int_tab(8);
}
