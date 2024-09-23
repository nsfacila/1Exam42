#include <stddef.h>
#include <stdio.h>

size_t ft_strcspn(const char *s, const char *reject)
{
	int i;
	int j;

	i = 0;
	while (s[i])
		{
			j = 0;
			while(reject[j])
			{
				if(s[i] == reject[j])
					return(i);
				j++;
			}
			i++;	
		}
		return(i);
}

int main ()
{
	char str[] = "hhhlllluuu";
	char re[] = "aeiou";
	size_t result;
	result = ft_strcspn(str, re);
	printf("este es el resultado de %zu", result);
	return (0);
}

//el bucle itera primero sobre la s y compara el primer caracter de s con la string reject, si no encuentra nada 
//sale del bucle y vuelve a iterar sobre segundo cararter de la s comparandolos nuevamente con la string reject, hasta que localice caracter coincidente.
//devuelve la posicion donde se encuentra caracter coincidente