#include <stdio.h>

unsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 0;

    while (i < 8) {  // Un número de 8 bits tiene 8 posiciones
        // Obtenemos el bit menos significativo con num % 2
        unsigned char bit = octet % 2;

        // Desplazamos result a la izquierda
        result = result * 2 + bit;  // Multiplicamos por 2 para desplazar y sumamos el bit

        // Reducimos num dividiéndolo por 2
        octet /= 2;

        // Incrementamos el contador
        i++;
    }
    return result;
}

int main() {
    unsigned char num = 13;  // Ejemplo: 00001101 en binario
    unsigned char reversed = reverse_bits(num);

    printf("El número original es: %u\n", num);     // 13
    printf("El número invertido es: %u\n", reversed);  // 1 nsigned char reverse_bits(unsigned char octet)
{
    unsigned char result = 0;
    int i = 0;

    while (i < 8) {  // Un número de 8 bits tiene 8 posiciones
        // Obtenemos el bit menos significativo con num % 2
        unsigned char bit = octet % 2;

        // Desplazamos result a la izquierda
        result = result * 2 + bit;  // Multiplicamos por 2 para desplazar y sumamos el bit

        // Reducimos num dividiéndolo por 2
        octet /= 2;

        // Incrementamos el contador
        i++;
    }

    return result;
}

