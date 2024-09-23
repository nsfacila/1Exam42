#include <stdio.h>

int	ft_atoi2(char *str)
{
	int i;
	int result;
	int sign;

	sign = 1;
	i = 0;
	result = 0;
	if(str[i] == '-')
	{
		i++;
		sign = -1;
	}	
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * sign);
}
int main()
{
	char array[] = "-500";
	
	printf("imprime %d", ft_atoi2(array));
	return(0);
}