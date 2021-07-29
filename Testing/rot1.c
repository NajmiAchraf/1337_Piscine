#include<unistd.h>

void	rot1(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] < 'z')
			str[i] = str[i] + 1;
		else if (str[i] == 'z')
		{
			str[i] = 'a';
		}
		if (str[i] >= 'A' && str[i] < 'Z')
			str[i] = str[i] + 1;
		else if (str[i] == 'Z')
		{
			str[i] = 'A';
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		rot1(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}