#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>

int	ft_list_size(t_list *axu)
{
	int i = 0;
	while(axu != NULL)
	{
		i++;
		axu = axu-> next;
	}
	return(i);
}
int main()
{
	t_list cabeza;
	t_list segundo;
	t_list tercero;

	cabeza.edad = 27;
	cabeza.next = &segundo;
	segundo.edad = 28;
	segundo.next = &tercero;

	tercero.edad = 21;
	tercero.next = NULL;

	printf("\n %d\n", ft_list_size(&cabeza));
}