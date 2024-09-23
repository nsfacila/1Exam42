
#include <stdio.h>
#include <stdlib.h>

int	count_words(char *str)
{
	int i = 0;
	int c = 0;

	while(str[i] == ' ')
		i++;
	while(str[i] != '\0')
		{
			if(str[i] != ' ')
			{
				c++;
				while(str[i] != ' ' && str[i] != '\0')
					i++;
			}
			while(str[i] == ' ')
				i++;
		}
	return(c);
}
char *get_words(char *str, int start, int len)
{
	char *new;
	int i = 0;

	new = malloc((len + 1) * sizeof(char));
	while(len--)
	{
		new[i] = str[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return(new);
}

char **ft_split(char *s)
{
	int x = count_words(s);
	int i = 0;
	int j = 0;
	int m = 0;
	char **result;

	result = malloc((x + 1) * sizeof(char *));
	while(s[i] == ' ')
		i++;
	while(s[i] != '\0')
	{
		j = i;
		while(s[i] != ' ' && s[i] != '\0')
			i++;
		if(j < i)
		{
			result[m] = get_words(s, j, i - j);
			m++;
		}
	}
	result[m] = '\0';
	return(result);

}

int main(int argc, char **argv)
{
	if (argc != 2)
		return(1, "\n", 1);
	char **final = ft_split(argv[1]);
	int i = 0;
	while (final[i] != NULL)
	{
		printf("%s", final[i]);
		i++;
	}
	return(0);
}