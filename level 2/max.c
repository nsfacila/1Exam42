#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int i;
	int max_value;

	i = 0;
	if(len == 0)
		return(0);
	max_value = tab[i];
	while(i < len)
	{
		if(tab[i] > max_value)
			max_value = tab[i];
		i++;
	}
	return(max_value);
}
int main ()
{
	int array [] = {5, 10, 20, 30};
	int longi = 4;
	int max_value = max(array, longi);
	printf("%d", max_value);
	return(0);
}
