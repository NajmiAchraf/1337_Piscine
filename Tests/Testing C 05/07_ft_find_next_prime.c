/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_ft_find_next_prime.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 14:51:21 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/12 08:54:47 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

//int	main(int argc, char **argv)
//{
//	int	i;
//
//	i = 1;
//	while (i < argc && argc >= 2)
//	{
//		printf("ft_find_next_prime : %d\n", ft_find_next_prime(atoi(argv[i])));
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
		printf("ft_find_next_prime(%d) => %d\n", a, ft_find_next_prime(a));
		a++;
	}
	return (0);
}
