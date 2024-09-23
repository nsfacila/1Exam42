#include <unistd.h>

void	expand_str(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[j])
		j++;
	j--;
	while((str[j] == ' ' || str[j] == '\t') && j >= 0)
		j--;
	while((str[i] == ' ' || str[i] == '\t' ) && str[i] != '\0')
		i++;
	while(i < j)
	{
		while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
			write(1, &str[i++], 1);
		if((str[i] == ' ' || str[i] == '\t') && i <= j)
			write(1, "   ", 3);
		while((str[i] == ' ' || str[i] == '\t' ) && str[i] != '\0')
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