#include <unistd.h>

void	expand_str(char *str)
{
	int i;
	int j;

	j = 0;
	while(str[j] != '\0')
		j++;
	j = j - 1;
	while((str[j] == ' ' || str[j] == '\t') && str[j] >= 0)
		j--;
	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	while(i <= j)
	{
		if(str[i] != ' ' && str[i] != '\t')
			write(1, &str[i], 1);
		i++;
		if((str[i] == ' ' || str[i] == '\t') && i <= j)
			write(1, "   ", 3);
		while(str[i] == ' ' || str[i] == '\t')
			i++;
	}

}



int main(int argc, char ** argv)
{
	if (argc !=2)
	{
		write(1, "\n", 1);
		return (1);
	}
	expand_str(argv[1]);
	return(0);
}