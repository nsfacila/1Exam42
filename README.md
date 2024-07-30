# 1Exam42
Ejercicios de examen en 4 Levels

## Un poco de teoria
¿Qué son `argc y argv`?
Cuando ejecutas un programa en C desde la línea de comandos, puedes pasarle información adicional. Esta información se conoce como "argumentos de la línea de comandos".

`argc` y `argv` en `main()`
La función principal de un programa en C se llama main, y puede definirse para recibir estos argumentos de la línea de comandos. Esto se hace de la siguiente manera:

`main(int argc, char *argv[])`

## Descripción

En C, los argumentos de la línea de comandos se pueden pasar al programa a través de los parámetros `argc` y `argv` de la función `main`. Aquí se explica qué son y cómo se usan:

- **`argc`** (Argument Count): Es un entero que indica el número de argumentos pasados al programa, incluyendo el nombre del programa mismo.
- **`argv`** (Argument Vector): Es un array de cadenas de caracteres (`char*`) que contiene los argumentos. Cada elemento de `argv` es una cadena que representa un argumento.

## Ejemplo Simple de Código

Aquí hay un programa en C que usa `argc` y `argv` para imprimir cada argumento que se le pase:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    // Imprimir el número total de argumentos
    printf("Número de argumentos: %d\n", argc);

    // Inicializar un índice para recorrer los argumentos
    int i = 0;

    // Bucle para imprimir cada argumento
    while (i < argc) {
        printf("Argumento %d: %s\n", i, argv[i]);
        i++;
    }

    return 0;
}
```
## Funcion Principal

`int main`(...) es la función donde empieza la ejecución del programa.

`argc` es el número de argumentos.

`argv` es un array de cadenas que contiene los argumentos.

## Imprimir argumentos

`printf("Número de argumentos: %d\n", argc);`

MUestra cuantos argumentos se le pasan al programa

## Bucle `while`para imprimir cada Argumento

`while (i < argc) 
{
    printf("Argumento %d: %s\n", i, argv[i]);
    i++;
}
`

- El bucle `while` sigue ejecutándose mientras `i` sea menor que argc.

- `printf` muestra cada argumento uno por uno.

- `i++` incrementa `i` para pasar al siguiente argumento en el siguiente ciclo del bucle.

# Cómo Probar el Programa
## Paso 1: Compilar el Código

Para convertir el código en un programa ejecutable, usa el siguiente comando en la terminal:

`gcc -o print_args print_args.c`

-Esto crea un archivo llamado print_args que puedes ejecutar.

## Paso 2: Ejecutar el Programa

`./print_args hola mundo prueba`

Puedes ejecutar el programa y pasarle algunos argumentos. Aquí hay un ejemplo:

## Salida esperada

```
Número de argumentos: 4
Argumento 0: ./print_args
Argumento 1: hola
Argumento 2: mundo
Argumento 3: prueba
```


