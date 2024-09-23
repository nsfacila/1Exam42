#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i;
	int c;
	//acuerdate de c--

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] -'a' + 1;
			while(c--)
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] - 'A' + 1;
			while(c--)
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
 }
int main (int argc, char ** argv)
{
	if (argc != 2 )
	{
		write(1, "\n", 1);
		return (1);
	}
	repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return(0);
}