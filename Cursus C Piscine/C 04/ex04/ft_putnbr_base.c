/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:58:20 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/08 09:26:12 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	if (i <= 1)
		return (0);
	return (1);
}

int	check_str(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[i + j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_sign(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	check_errors(char *base)
{
	int	pass;

	pass = len(base);
	if (pass == 0)
		return (pass);
	pass = check_str(base);
	if (pass == 0)
		return (pass);
	pass = check_sign(base);
	return (pass);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	pass;

	pass = check_errors(base);
	i = 0;
	if (pass == 1)
	{
		while (base[i] != '\0')
			i++;
		if (nbr / i != 0)
			ft_putnbr_base(nbr / i, base);
		write(1, &base[nbr % i], 1);
	}
}
