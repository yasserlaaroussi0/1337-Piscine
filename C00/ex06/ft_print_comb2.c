#include <unistd.h>

void	ft_putchar(char	c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchar(x / 10 + 48);
			ft_putchar(x % 10 + 48);
			write(1, " ", 1);
			ft_putchar(y / 10 + 48);
			ft_putchar(y % 10 + 48);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}
