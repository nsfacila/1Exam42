#include <stdio.h>
#include <stdlib.h>
int	count_word(char *str)
{
	int i = 0;
	int c = 0;


	while(str[i] == ' ' || str[i] == '\t' && str[i] != '\0')
		i++;
	if(str[i] != ' ' && str[i] != '\0')
		c++;
	while(str[i])
	{
		if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			c++;
		i++;
	}
	return(c);
}
char *get_word(char *str, int start, int len)
{
	char *new;
	int i = 0;

	new = malloc(sizeof(char) * (len + 1));
	if(!new)
		return(NULL);
	while(len--)
		new[i++] = str[start++];
	new[i] = '\0';
	return(new);
}

char **ft_split(char * str)
{
	int i = 0;
	int j = 0;
	char **result;
	int m = 0;
	int x = count_word(str);

	result = malloc((sizeof(char *)) * (x + 1));
	if(!result)
		return(NULL);
	while(str[i])
	{
		while(str[i] == ' ' && str[i] != '\0')
			i++;
		j = i;
		while(str[i] != ' ' && str[i] != '\0')
			i++;
		if(j < i)
		{
			result[m] = get_word(str, j, i - j);
			m++;
		}
	}
	result[m] = NULL;
	return(result);
}

int main (int argc, char **argv)
{
	if(argc != 2)
	{
		printf("\n");
		return(1);
	}
	char **final = ft_split(argv[1]);
	int i = 0;
	while(final[i])
	{
		printf("%s\n", final[i]);
		i++;
	}
	return(0);
	// int x = count_word(argv[1]);
	// printf("%d", x);
	// return(0);
}

