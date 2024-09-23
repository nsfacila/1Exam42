#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
int main()
{
	print_bits(14);
	return(0);
}


// Se declara unsigned char octet y la i = 8 ya que es el numero de bits de un unsign char
// bit es la variable que almacena cada bit del octect convertido a caracter (binario).
//while(i--) para que el bucle se ejecute 8 veces y vaya decrementando.
//octet >> i desplaza los bits a la derecha i posiciones  & 1 (extrae bit menos significativo 0 o 1) y +'0' para covertirlo a caracter.