#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int a;
	int *ptr;

	ptr = &a;
	ft_ft(ptr);
	printf("%d\n", a);
	printf("%d\n", *ptr);

	*ptr = 30;
	printf("%d\n", a);
	printf("%d\n", *ptr);

	return (0);
}