#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int 			i;
	int 			j;
	char			array[256] = {0};
	unsigned char	c;


	i = 0;
	while (s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if (s1[i] == s2[j])
			{
				c = (unsigned char)s1[i];
				array[c] += 1;
				if (array[c] == 1)
					write(1, &s1[i], 1);
			}
			j++;
		}
		i++;
	}
}

int main (int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return(1);
	}
	inter(argv[1], argv[2]);
	return(0);
}