#include <stdio.h>

int	max(int *array, unsigned int len)
{
	int *ptr;
	int *end;
	int result;

	if(len == 0)
		return(0);
	ptr = array;
	end = array + len;
	result = *ptr;
	while(ptr < end)
	{
		if(result < *ptr)
			result = *ptr;
		ptr++;
	}
	return(result);
}
int main ()
{
	int num[] = {5, 10, 15, 50};
	int len = 4;
	int n_max = max(num, len);
	printf("%d", n_max);
	return(0);
}