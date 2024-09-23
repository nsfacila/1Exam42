#include <stdio.h>

// Función para convertir cadena de caracteres a entero (similar a atoi)
int mi_atoi(char *str) {
    int resultado = 0;  // Variable para almacenar el número convertido
    int i = 0;

    // Ignoramos espacios iniciales (si los hubiera)
    while (str[i] == ' ') {
        i++;
    }

    // Convertimos los caracteres numéricos al número entero
    while (str[i] >= '0' && str[i] <= '9') {
        resultado = resultado * 10 + (str[i] - '0');  // Actualizamos el número
        i++;
    }

    return resultado;
}

// Función para verificar si un número es primo
int es_primo(int n) {
    if (n <= 1) return 0;  // Si el número es <= 1, no es primo
    int divisor = 2;
    while (divisor * divisor <= n) {  // Verificamos divisores hasta la raíz cuadrada
        if (n % divisor == 0) return 0;  // Si encontramos un divisor, no es primo
        divisor++;
    }
    return 1;  // Si no encontramos divisores, es primo
}

int main(int argc, char *argv[]) {
    if (argc != 2) {  // Verificamos que haya exactamente un argumento
        printf("0\n");  // Si no, imprimimos 0
        return 0;
    }

    int num = mi_atoi(argv[1]);  // Convertimos el argumento a entero usando nuestra función mi_atoi

    if (num <= 0) {  // Verificamos si el número es positivo
        printf("0\n");  // Si no es positivo, imprimimos 0
        return 0;
    }

    int suma = 0;  // Variable para acumular la suma de los primos
    int i = 2;  // Comenzamos desde el primer número primo (2)

    // Iteramos sobre todos los números desde 2 hasta el número dado
    while (i <= num) {
        if (es_primo(i)) {  // Si el número es primo, lo sumamos
            suma += i;
        }
        i++;  // Incrementamos el contador
    }

    printf("%d\n", suma);  // Imprimimos la suma total
    return 0;
}
