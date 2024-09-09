
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	ft_putchar(c);
}
/* 
int	main(void)
{
	int	nbr = 420;
	ft_putnbr(nbr);
	return (0);
}
 */