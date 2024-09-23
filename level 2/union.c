#include <unistd.h>

void	ft_union(char *s1, char *s2)
{
	int i;
	int j;
	char array[256] = {0};
	unsigned char c;

	i = 0;
	j = 0;
	while(s1[i])
	{
		c = (unsigned char)s1[i];
		array[c] = array[c] + 1;
		if(array[c] == 1)
			write(1, &c, 1);
		i++;
	}
	while(s2[j])
	{
		c = (unsigned char)s2[j];
		array[c] = array[c] + 1;
		if(array[c] == 1)
			write(1, &c, 1);
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	ft_union(argv[1], argv[2]);
	return (0);
}