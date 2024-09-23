#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
		// n = n % 10 + '0';
		//write (1, &n, 1);
	}
	else 
		ft_putchar((n % 10) + '0');
}
void	fizzbuzz(int n)
{
	while (n <= 100)
	{
		if (n % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if(n % 3 == 0)
			write (1, "fizz", 4);
		else if(n % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;
	}
}
int main (void)
{
	fizzbuzz(1);
	return(0);
}