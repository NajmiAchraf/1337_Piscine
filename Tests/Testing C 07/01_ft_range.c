/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_range.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:56:29 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/13 16:21:41 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (!tab)
		return (NULL);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

int	main(int argc, char **argv)
{
	int	*tab;

	(void) argc;
	if (atoi(argv[1]) < atoi(argv[2]))
		tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	else
		return (0);
	printf("ft_range(%s, %s)\n", argv[1], argv[2]);
	for (int i = 0; i < (atoi(argv[2]) - atoi(argv[1])); i++)
		printf("=> %d\n", tab[i]);
	return (0);
}
