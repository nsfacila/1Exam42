#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x = 10;
	int	y = 5;
	printf("hazme un swap de %d y de %d", x, y);
	ft_swap(&x, &y);
	printf("este es el swap de %d, y de %d", x, y);
	return (0);
}
