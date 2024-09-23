#include <stdio.h>
int ft_atoi(const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while(str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
		i++;
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
	char s[] = "  -123";
	int nb = ft_atoi(s);
	printf("%d", nb);
	return(0);
}


