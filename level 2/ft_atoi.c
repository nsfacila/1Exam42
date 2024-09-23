#include <stdio.h>

int	ft_atoi(const char *str)
{
	int nb;
	int i;
	int sign = 1;

	i = 0;
	nb = 0;
	if(str[i] == '-')
	{
		i++;
		sign = -1;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return(nb * sign);
}
int main()
{
	char s[]= "123";
	printf("el char se tranforma en %i\n", ft_atoi(s));
	return (0);
}