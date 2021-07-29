#include <unistd.h>

void	alpha_mirror_ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a' - 32;
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A' + 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror_ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
