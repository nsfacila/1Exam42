// #include <unistd.h>

// void	*first_world(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i] == ' ' || str[i] == '\t')
// 		i++;
// 	while((str[i] != ' ' || str[i] != '\t') && str[i != '\0'])
// 	{
// 		write (1, &str[i], 1);
// 		i++;
// 	}
// }
// int main (int argc, char *argv[])
// {
// 	if (argc == 2)
// 	first_world(argv[1]);
// 	write (1, "\n", 1);
// 	return(0);
// }

#include <unistd.h>

void print_first_word(char *str)
{
    int i = 0;
    
    // Skip initial spaces or tabs
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    
    // Print characters until a space, tab, or end of string is found
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        print_first_word(argv[1]);
    
    // Always print a newline at the end
    write(1, "\n", 1);
    return 0;
}
