/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_recursive_power.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 15:17:27 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/12 11:20:30 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else if (power == 1)
	{
		return (nb);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}

//int	main(void)
//{
//	printf("%d\n", ft_recursive_power(0, 0));
//	printf("%d\n", ft_recursive_power(2, -1));
//	printf("%d\n", ft_recursive_power(2, 0));
//	printf("%d\n", ft_recursive_power(2, 1));
//	printf("%d\n", ft_recursive_power(2, 2));
//	printf("%d\n", ft_recursive_power(2, 3));
//	printf("%d\n", ft_recursive_power(2, 4));
//	printf("%d\n", ft_recursive_power(2, 5));
//	printf("%d\n", ft_recursive_power(2, 6));
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
			printf("ft_recursive_power(%d, %d) => %d\n", a, b, ft_recursive_power(a, b));
			b++;
		}
		a++;
	}
	return (0);
}
