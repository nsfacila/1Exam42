#include <unistd.h>
void	epur_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while(str[j] == ' ' || str[j] == '\t')
		j--;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(i <= j)
	{
		while((str[i] != ' ' &&str[i] != '\t') && str[i])
			write(1, &str[i++], 1);
		if ((str[i] == ' ' || str[i] == '\t') && i <= j)
			write(1, " ", 1);
		while(str[i] == ' ' || str[i] == '\t')
			i++;
	}
}

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);	
		return(1);
	}
	epur_str(argv[1]);
	write(1, "\n", 1);
	return(0);
}