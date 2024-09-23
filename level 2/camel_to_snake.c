#include <unistd.h>

void	camel_to_snake(char *str)
{
	int i;

	i = 0;
	while(str[i] >= 97 && str[i] <= 122)
	{
		write(1, &str[i], 1);
		i++;
		while(str[i] >= 65 && str[i] <= 90)
		{
			write(1, "_", 1);
			str[i] = str[i] + 32;
			write(1, &str[i], 1);
			i++;
		}
	} 
}

int main(int argc, char **argv)
{
	if (argc == 2)
	camel_to_snake(argv[1]);
}