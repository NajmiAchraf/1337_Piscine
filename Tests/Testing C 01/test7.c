#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	inv;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		inv = tab[a];
		tab[a] = tab[b];
		tab[b] = inv;
		a++;
		b--;
	}
}

int	main(void)
{
	int	size = 8;
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int	i;

	ft_rev_int_tab(tab, size);
	for (i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
	return (0);
}
