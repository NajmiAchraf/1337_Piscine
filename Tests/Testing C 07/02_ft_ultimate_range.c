/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_ultimate_range.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:48:49 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/13 16:59:32 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int	*tab;

	(void) argc;
	//if (atoi(argv[1]) < atoi(argv[2]))
	ft_ultimate_range(&tab, atoi(argv[1]), atoi(argv[2]));
	//else
		//return (0);
	printf("ft_ultimate_range(%s, %s)\n", argv[1], argv[2]);
	for (int i = 0; i < (atoi(argv[2]) - atoi(argv[1])); i++)
		printf("=> %d\n", tab[i]);
	return (0);
}
