#include <stdio.h>

// necesitamos hacer una funcion atoi ya que los argumentos toman siempre caracteres como entrada,
// con la funcion atoi convertimos char to integer
int mi_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result);
}
// Declaramos una variable que itere e inicializa en 2 porque es el numer mas pequeño que puede ser primo.
// La primera condicion es comprobar si el numero es menor que 2, en este caso no es primo  devuelve 0
//hacemos un bucle donde verificamos que la variable i * i = (2 por 2) es menor que el numero dado para que entre en el bucle, optimiza el codigo
//Una condicion que si el numero que pase es modulo de i y el resultado del calculo es 0 , no es primo por lo que retorna 0, 
//caso contrario si es primo, devuelve 1.

void	add_prime_sum(int number)
{
	int i;

	i = 2;
	if (number < 2)
		return(0);
	while (i * i <= number)
		if(number % i == 0)
		return(0);
		i++;
	return (1);

}
int main (int argc, char **argv)
{
	if(argc != 2)
}