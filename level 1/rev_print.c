#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i ++;
	while(i > 0)
	{
		ft_putchar(str[i - 1]);
		i--;
	}
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	return (1);
	}
	rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}