#include<unistd.h>

void	search_and_replace(char *str, char a, char b)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = b;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (((argv[2][0] != '\0') && (argv[3][0] != '\0'))
			&& ((argv[2][1] == '\0') && (argv[3][1] == '\0')))
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
