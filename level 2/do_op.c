#include "do_op.h"

int	do_op(int nb, char c, int x)
{
	int result = 0;

	if(c == '+')
		result = nb + x;
	else if(c == '-' )
		result = nb - x;
	else if(c == '*')
		result = nb * x;
	else if (c == '/')
		result = nb / x;
	else if (c =='%')
		result = nb % x;
	return(result);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return(1);
	}
	printf("devuelve %i\n", do_op(atoi(argv[1]), argv[2][i], atoi(argv[3])));
	return(0);
}