#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	search_and_replace(char *str, char *a, char *b)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a[0])
		{
			str[i] = b[0];
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	search_and_replace(argv[1], argv[2], argv[3]);
	return(0);
}