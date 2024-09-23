#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char *result;
	int i ;
	int j;

	i = 0;
	if(src[i])
		i++;
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return(NULL);
	i = 0;
	j = 0;
	while(src[i])
		result[j++] = src[i++];
	return(result);
}
int main()
{
	char fuente[] = "HOLA";
	printf("Tienes que ser igual que %s", ft_strdup(fuente));
	return(0);
}