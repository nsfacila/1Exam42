#include <stdio.h>

// Función para verificar si un número es una potencia de 2
int is_power_of_2(unsigned int n) 
{
    // Si el número es 0, no es una potencia de 2
    if (n == 0)
        return 0;

    // Mientras el número sea divisible por 2
    while (n % 2 == 0) 
        n = n / 2; // Dividir el número por 2

    // Si el resultado final es 1, es una potencia de 2
    return (n == 1);
}

int main() {
    int nb = 5;
    printf("imprime %i\n", is_power_of_2(nb));
    return 0;
}

// int	    is_power_of_2(unsigned int n)
// {
// 	if (n == 0)
// 		return (0);
// 	if (n == 1)
// 		return (1);
// 	while (n % 2 == 0)
// 	{
// 		n = n / 2;
// 		if (n == 1)
// 		return (1);
// 	}
// 	return (0);
// }

// int main ()
// {
// 	int nb = 1;
// 	printf("imprime %i", is_power_of_2(nb));
// 	return (0);
// }