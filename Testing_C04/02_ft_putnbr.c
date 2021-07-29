/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:53:21 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/07 12:30:24 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	i;

	i = nb;
	if (i < 0)
	{
		print('-');
		i = i * (-1);
	}
	if (9 < i)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else if (0 <= i && i < 10)
		print(i + '0');
}

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}
