#include <unistd.h>

void	rot13(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'm')
			|| ('A' <= str[i] && str[i] <= 'M'))
			str[i] += 13;
		else if (('n' <= str[i] && str[i] <= 'z')
			|| ('N' <= str[i] && str[i] <= 'Z'))
			str[i] -= 13;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2 && argv[1][0] != '\0')
		rot13(argv[1]);
	write(1, "\n", 1);
	return (0);
}
