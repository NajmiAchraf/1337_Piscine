/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:03:01 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/15 21:01:26 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		print(str[i]);
		i++;
	}
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
	if (i > 9)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else
		print(i + '0');
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		print('\n');
		ft_putnbr(par[i].size);
		print('\n');
		ft_putstr(par[i].copy);
		print('\n');
		i++;
	}
}
