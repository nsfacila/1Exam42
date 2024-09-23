#include <unistd.h>
void putnbr()
{
	
}

int first_word(char *str)
{
	int i = 0;

	while(str[i])
	{
		while((str[i] == ' ') && str[i])
			i++;
		while((str[i] != ' ') && str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
		break;
	}
	write(1, "\n", 1);
	return(i)
}


int main(int argc, char **argv)
{
	int len = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	else
	len = first_word(argv[1]);
	putstr(len);
	return(0);
}