# include <unistd.h>

void last_word(char *str)
{
	int i;
	int start;

	i = 0;
	while(str[i])
		i++;
	while(i > 0 && (str[i - 1] == ' ' || str[i - 1] == '\t'))
		i--;
	start = i;
	while(start > 0 && (str[start - 1] != ' ' && str[start - 1] != '\t'))
		start--;
	while(start < i)
	{
		write(1, &str[start], 1);
		start ++;
	}
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	last_word(argv[1]);
	write(1, "\n", 1);
	return(0);
}