#include <stdio.h>

int ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int value;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			value = str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			value = (str[i] - 'a') + 10;
		else if (str[i] >= 'A' && str[i] <= 'F')
			value = (str[i] - 'A') + 10;
		else
			return(0);
		if(value >= base)
			return(0);
	result = result * base + value;
	i++;
	}
	return(result * sign);
}
int main()
{
	char s[] = "100a";
	int base = 16;
	int num = ft_atoi_base(s, base);
	printf("%i", num);

}