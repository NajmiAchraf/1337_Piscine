#include <stdio.h>

int main(void)
{
	int	a;
	int	b;
	int	*ptr;

	a = 42;
	b = 1337;
	ptr = &a;
	printf("%p\n", ptr);
	printf("%p\n", ptr + 1);
	return (0);
}