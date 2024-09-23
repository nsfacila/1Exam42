#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_repeat(char *str)
{
	int i;
	int x;
	//char c

	i = 0;
/* 	c = 1;
	while (c--)
		write(1, &str[i], 1); */
	while(str[i])
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				x = str[i] - 'a' + 1;
				while (x > 0)
				{
					write (1, &str[i], 1);
					x--;
				}
			}
			else
				x = str[i] - 'A' + 1;
				while (x > 0)
				{
					write(1, &str[i], 1);
					x--;
				}

		}
			write(1, &str[i], 1);
		i++;
	}

}

int main (int argc, char ** argv)
{
	if(argc != 2)
	{
		write (1, "\n", 1);
		return(1);
	}
	ft_repeat(argv[1]);
	//write(1, "\n", 1);
	return(0);

	
}