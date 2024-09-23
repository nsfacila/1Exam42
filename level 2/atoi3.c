#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == '\t'|| str[i] == '\n' || str[i] == ' ')
		i++;
	if(str[i] == '-')
	{
		i++;
		sign = -1; // Avanzamos en la siguiente posicion de la str para que entre en el bucle
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return(result * sign);
}

	int main()
	{
		const char convert[] = "500";
		//int re = ft_atoi(convert);
		printf("%i", ft_atoi(convert));
		return(0);
	}


//Para que nos devuelva un numero entero de mas de un digito tenemos que multiplicar el valor  * 10 para sacar unidades, decenas y centenas.. de un digito
//Cada resultado del bucle while se va actualizando en variable resultado haciendo * 10 + nuevo valor de caracter que contiene str[i]. POr ejemplo 
//-500 Iteracion 1 : 0 * 10 = 0 + (53 - 48) = 5 Iteracion 2 : 5 * 10 = 50 + (48 - 48) = 50  Iteracion 3 : 50 * 10 = 500 (48 - 48) = 500. FINAl 500 * -1 = -500
	//"   -500"
