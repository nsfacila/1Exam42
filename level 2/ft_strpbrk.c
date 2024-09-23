#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char	*s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return(NULL);
}

int main()
{
    char str1[] = "hola";
    char str2[] = "aeiou";
    char *result = ft_strpbrk(str1, str2);
	printf("Esta es la letra en s1 de la primera aparicion s2: %c\n", *result);
	return (0);
}
// Importante acordarse que lo que devuelve la funcion es un puntero a un char(char *) y no un char. y el especificador de formato debe de ser %c