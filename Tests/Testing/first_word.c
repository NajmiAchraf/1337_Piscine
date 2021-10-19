#include <unistd.h>

void	first_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (33 <= str[i] && str[i] <= 127)
			break ;
		i++;
	}
	while (33 <= str[i] && str[i] <= 127)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}
