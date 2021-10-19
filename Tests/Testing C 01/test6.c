#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main()
{
	char name[] = "hello everyone on 1337";
	int a;

	a = ft_strlen(name);
	printf("%d", a);
}
