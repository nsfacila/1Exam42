#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i = 0;
	int bits[8];
	char bit_char; //se declara un array de enteros y no un unsigned char para manipular cada bit individualmente.

	while(i < 8)
	{
		bits[i] = octet % 2;
		octet /= 2;
		i++;
	}
	i = 7;
	while (i >= 0)
	{	
		bit_char = bits[i] + '0';
		write(1, &bit_char, 1);
		i--;
	}
	write(1, "\n", 1);
}
int main()
{
	print_bits('4');
	return(0);
}