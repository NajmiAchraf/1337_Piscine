/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_ft_is_prime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:34:35 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/12 08:49:26 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		//printf("%d <= (%d / %d = %d)\n", i, nb, i, (nb / i));
		//printf("%d mod %d = %d\n", nb, i, (nb % i));
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

//int	main(int argc, char **argv)
//{
//	int	i;
//
//	i = 1;
//	while (i < argc && argc >= 2)
//	{
//		printf("ft_is_prime : %d\n", ft_is_prime(atoi(argv[i])));
//		i++;
//	}
//	return (0);
//}

int	main(int argc, char **argv)
{
	int	a;

	a = 1;
	(void) argc;
	while (a < atoi(argv[1]))
	{
		printf("ft_is_prime(%d) => %d\n", a, ft_is_prime(a));
		a++;
	}
	return (0);
}
