#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void	ft_putnbr(int n)
{
	if(n > 9)
		ft_putnbr(n / 10);

	ft_putchar((n % 10) + 48);
}
void	fizzbuzzz(int nb)
{
	while (nb <= 100)
	{
		if (nb % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putnbr(nb);
		write(1, "\n", 1);
		nb++;
	}

}

int main (void)
{
	int nb;
	nb = 1;
	fizzbuzzz(nb);
	return (0);
}