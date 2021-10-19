/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_iterative_factorial.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 11:08:20 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/07 12:05:27 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	i;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (fact);
	else if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}

int	main(void)
{
	printf("%d\n", ft_iterative_factorial(-15));
	printf("%d\n", ft_iterative_factorial(16));
	printf("%d\n", ft_iterative_factorial(17));
	printf("%d\n", ft_iterative_factorial(18));
	printf("%d\n", ft_iterative_factorial(19));
	return (0);
}
