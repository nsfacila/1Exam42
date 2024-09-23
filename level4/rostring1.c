#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*insisto(char *s)
{
	int		i;
	int		j;
	int		XXX;
	char	*temp;

	i = 0;
	j = 0;
	XXX = 0;
	while (s[i] == ' ' && s[i])
		i++;
	j = i;
	while (s[i] != ' ' && s[i] != '\0')
		i++;
	temp = malloc(sizeof(char) * (i - j + 1));
	while (j < i)
		temp[XXX++] = s[j++];
	temp[XXX] = '\0';
	return (temp);
}
char	*nose(char *s)
{
	int	i;
	int j = 0;


	i = 0;
	char	*noe;
	char	*todo;
	noe = insisto(s);
	while (s[i] == ' ' && s[i])
		i++;
	while (s[i] != ' ' && s[i] != '\0')
		i++;
	todo = malloc(sizeof(char) * (j + 1));
	todo[j] = '\0';
	return (todo);
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	char *x = nose(argv[1]);
	printf("%s", x);
	return(0);
}