/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_iterative_power.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 14:16:28 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/12 11:20:39 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * i;
		power--;
	}
	return (nb);
}


//int	main(void)
//{
//	printf("%d\n", ft_iterative_power(0, 1));
//	printf("%d\n", ft_iterative_power(0, 0));
//	printf("%d\n", ft_iterative_power(4, -1));
//	printf("%d\n", ft_iterative_power(-2, 2));
//	printf("%d\n", ft_iterative_power(3, 2));
//	return (0);
//}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	a = 0;
	(void) argc;
	while (a < atoi(argv[1]))
	{
		b = 0;
		while (b < atoi(argv[2]))
		{
			printf("ft_iterative_power(%d, %d) => %d\n", a, b, ft_iterative_power(a, b));
			b++;
		}
		a++;
	}
	return (0);
}
