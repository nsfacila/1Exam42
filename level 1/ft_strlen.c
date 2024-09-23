#include <stdio.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}
int main()
{
	char str[] = "beauty";

	printf("La longitud de beauty es , %d", ft_strlen(str));
	return(0);
}