
#include <unistd.h>

int my_atoi(char *str)
{
	int i;
	int result;
	
	i = 0;
	result = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}

int is_prime(int n)
{
	int i = 1;
	int contador = 0;
	while (i <= n)
	{
		if(n % i == 0)
			contador++;
		i++;
	}
	if(contador == 2) //es primo
		return(1);
	else
		return(0);
}
int	add_prime_sum(int n)
{
	int sum = 0;
	int i = 1;
	while(i <= n)
	{
		if(is_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	return(sum);
}
void ft_putnumeros(int n)
{
	char *str = "0123456789";
	if(n > 9)
		ft_putnumeros(n / 10);
	write(1, &str[n % 10] ,1);
}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "0\n", 2);
		return(1);
	}
	int n = my_atoi(argv[1]);
	n = add_prime_sum(n);
	ft_putnumeros(n);
	write(1, "\n", 1);
	return(0);
}