#include <stdio.h>

char	*ft_strrev(char	*str)
{
	int i;
	int j = -1;
	char aux = 'a';
	
	i = 0;
	while(str[i])
		i++;
	while(i > j / 2)
	{
		aux = str[j];
		str[j] = str[i];
		str[i] = aux;
		i--;
		j++;
	}
	return(str);
}
int main()
{
	char s[] = "abcdef";
	printf("soy abcdef al reves %s", ft_strrev(s));
	return(0);
}