#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int count(char *str)
{
	int i = 0;
	int count = 0;

	while(str[i] == ' ')
		i++;
	if(str[i] != ' ' && str[i] != '\0')
		count++;
	while (str[i] != '\0')
	{
		if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
			count++;
		i++;
	}
	return (count);
}
char	*get_word(char *str, int start, int len)
{
 	int i  = 0;
	char *word;

	word = malloc((sizeof(char)) * (len + 1));
	if (!word)
		return(NULL);
	while (len--)
		word[i++] = str[start++];
	word[i] = '\0';
	return(word);
}
char **split(char *s)
{
	char **final;
	int i = 0;
	int j = 0;
	int w = 0;
	int x = count(s);

	final = (char **)malloc(sizeof(char *) * (x + 1));
	if(!final)
		return(NULL);
	while (s[i])
	{
		while(s[i] == ' ' && s[i] != '\0')
			i++;
		j = i;
		while(s[i] != ' ' && s[i] != '\0')
			i++;
		if(j < i)
		{
			final[w] = get_word(s, j, i - j);
			w++;
		}
	}
	final[w] = NULL;
	return (final);

}

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		write(1, "\n", 1);
		return(1);
	}
	int x = count(argv[1]);
	char **word = split(argv[1]);
/* 	while(word[i])
		printf("%s\n", word[i++]); */
	int i = 0;
	while(word[i])
		i++;
	if (i == 1)
		printf("%s", word[0]);
	else
	{
		i = 1;
		while(word[i])
			printf("%s ", word[i++]);
		printf("%s", word[0]);

	}
	return(0);

}