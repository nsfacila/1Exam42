#include <unistd.h>

void alpha_mirror(char *str)
{
	int i;
	int count;

	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			count = 219 - str[i];
			write (1, &count, 1);
		}
		else if(str[i] >= 'A' && str[i] <= 'Z')
		{
			count = 155 - str[i];
			write (1, &count, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main (int argc, char ** argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	alpha_mirror (argv[1]);
	write(1, "\n", 1);
	return (0);
}