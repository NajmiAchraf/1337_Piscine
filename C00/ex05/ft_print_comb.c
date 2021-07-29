/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 09:27:07 by anajmi            #+#    #+#             */
/*   Updated: 2021/06/25 11:42:31 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	print_combo(char n1, char n2, char n3)
{
	if ((n1 != n2) && (n1 != n3) && (n2 != n3))
	{
		print(n1);
		print(n2);
		print(n3);
		if (n1 != '7')
		{
			print(',');
			print(' ');
		}
	}
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '7')
	{
		n2 = n1 + 1;
		while (n2 <= '8')
		{
			n3 = n2;
			while (n3 <= '9')
			{
				print_combo(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
