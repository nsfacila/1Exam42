#include <stdio.h>

int ft_atoi_base(const char *str, int base)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	if (str[i] == '-')
	{	
		sign = -1;
		i++;
	}
	if(base >= 2 && base <= 10)
	{
		while(str[i] >= '0' && str[i] <= '9')
			result = result * base + (str[i] - '0');
	}
	else if(base > 10 && base <= 16)
	{
		while((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))
		{
			if(str[i] >= '0' && str[i] <= '9')
				result = result * base + (str[i] - '0');
			else if (str[i] >= 'a' && str[i] <= 'z')
				result = result * base + (str[i] - 'a') + 10;
			else
				result = result * base + (str[i] - 'A') + 10;
			i++;
		}
	}
	else
		return(0);
	return(result * sign);
}
int main()
{
	char s[] = "100a";
	int base = 16;
	int num = ft_atoi_base(s, base);
	printf("%i", num);

}
