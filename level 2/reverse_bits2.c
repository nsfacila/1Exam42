#include <stdio.h>
unsigned char reverse_bit(unsigned char octet)
{
	int i = 8;
	unsigned char result;

	while(i > 0)
	{

		result = result * 2 +(octet % 2);
		octet /= 2;
		i--;
	}
	return (result);
}
int main()
{
	unsigned char num = ',';
	unsigned char reversed = reverse_bit(num);
	printf("imprime el numero sin revertir %c\n", num);
	printf("numero invertido, %c", reversed);
	return(0);
}