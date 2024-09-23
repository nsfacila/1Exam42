#include <unistd.h>

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = 'z' - (str[i] - 'a');// str[i] = 122 - (str[i] - 97) porque a z le resto la misma diferencia que hat entre a y mi caracter.
		else if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] = 'Z' - (str[i] - 'A'); // str[i] = 90 - str[i] - 65)
		
		write(1, &str[i], 1);
		i++;
	}
}
int main (int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	alpha_mirror(argv[1]);
	return(0);
}