/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_sqrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 16:41:49 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/12 09:50:30 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

//int	main(int argc, char **argv)
//{
//	int	i;
//
//	i = 1;
//	while (i < argc && argc >= 2)
//	{
//		printf("ft_sqrt : %d\n", ft_sqrt(atoi(argv[i])));
//		printf("sqrt : %f\n", sqrt(atoi(argv[i])));
//		i++;
//	}
//	return (0);
//}

int	main(int argc, char **argv)
{
	int	a;

	a = atoi(argv[1]);
	(void) argc;
	if (atoi(argv[1]) < atoi(argv[2]))
	{		
		while (a < atoi(argv[2]))
		{
			printf("ft_sqrt(%d) => %d\n", a, ft_sqrt(a));
			a++;
		}
	}
	return (0);
}
