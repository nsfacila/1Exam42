#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int x;

	i = 0;
	x = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			x = str[i] - 'A' + 1;
			while (x > 0)
			{
				write(1, &str[i], 1);
				x--;
			}
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			x = str[i] - 'a' + 1;
			while (x > 0)
			{
				write(1, &str[i], 1);
				x--;
			}
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}