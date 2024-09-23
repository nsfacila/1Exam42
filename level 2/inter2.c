#include <unistd.h>

void	inter(char *str1, char *str2)
{
	int i;
	int j;
	unsigned char array[256] = {0};

	i = 0;
	while(str1[i])
	{
		j = 0;
		while(str2[j])
		{
			if(str1[i] == str2[j])
			{
				array[(unsigned char)str1[i]] += 1;
				if((array[(unsigned char)str1[i]]) == 1)
					write(1, &str1[i], 1);
			}
			j++;
		}
		i++;
	}

}

int	main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	inter(argv[1], argv[2]);
	return(0);
}

//1 sera "abecedario
// 2 sera"noelia"
// necesito un array que almacene todos los caracteres para verificar que no se repiten
//este array lo tengo que inicializar en 0 e ir incrementando en el caso de caracter repetido

//ejemplo str1[a] es la posicion 0, str[a] es posicion 5 entra en el bucle, convierte la a en valos ascii dentro del array que ehemos declarado
//'a' = 97 array[97], se inicializa en 0 por eso le sumamos uno. si es uno imprimimos con la condicion if.
// si 'a' se repite suma +1 y ya no se imprime.