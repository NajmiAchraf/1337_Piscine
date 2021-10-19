/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 09:41:25 by anajmi            #+#    #+#             */
/*   Updated: 2021/06/30 09:41:28 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	save;
	int	a;

	a = 0;
	while (a < (size - 1))
	{
		if (tab[a] > tab[a + 1])
		{
			save = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = save;
			a = -1;
		}
		a++;
	}
}

int	main(void)
{
	int	tab[] = {56, 34, -5, 4, 564, -4145645, 10 , 0};
	int	size = 8;
	int	i;

	ft_sort_int_tab(tab, size);
	for (i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	return (0);
}
