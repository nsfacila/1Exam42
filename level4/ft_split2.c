#include <stdio.h>
#include <stdlib.h>

int count_words(char *str)
{
	int i = 0;
	int c = 1;

	while(str[i] == ' ' && str[i] != '\0')
		i++;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			c++;
		i++;
	}
	return(c);
}
char	*get_words(char *str, int start, int len)
{
	char *new;
	int i = 0;
	

	new = malloc((sizeof(char)) * (len + 1));
	if(!new)
		return(NULL);
	while(len--)
		new[i++] = str[start++];
	new[i] = '\0';
	return(new);
}

char **ft_split(char *str)
{
	int start = 0;
	int end = 0;
	char **result;
	int m = 0;
	int x = count_words(str);

	result = malloc((sizeof(char *)) * (x + 1));
	if(!result)
		return(NULL);
	while(str[end] != '\0')
	{
		if(str[end] == ' ')
		{
			while(str[end] == ' ' && str[end] != '\0')
				end++;
		}
		start = end;
		while(str[end] != ' ' && str[end] != '\0')
			end++;
		if(start < end)
		{
			result[m] = get_words(str, start, end - start);
			m++;
		}
	}
	result[m] = NULL;
	return(result);
}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("\n");
		return(1);
	}
	// int x = count_words(argv[1]);
	// printf("%d", x);
	// return(0);
	char **final = ft_split(argv[1]);
	int i = 0;
	while(final[i])
	{
		printf("%s\n", final[i]);
		i++;
	}
	return(0);
}
