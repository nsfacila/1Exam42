#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Y') || (str[i] >= 'a' && str[i] <= 'y'))
		{
			ft_putchar((str[i]) + 1);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
			ft_putchar((str[i]) - 25);
		else
			ft_putchar(str[i]);
	i++;
	}
}
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}