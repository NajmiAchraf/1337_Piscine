/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 11:21:56 by anajmi            #+#    #+#             */
/*   Updated: 2021/06/26 18:51:32 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	print_combo(int a, int b)
{
	if (a < b)
	{
		print(a / 10 + '0');
		print(a % 10 + '0');
		print(' ');
		print(b / 10 + '0');
		print(b % 10 + '0');
		if (a != 98)
		{
			print(',');
			print(' ');
		}
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_combo(a, b);
			b++;
		}
		a++;
	}
}
