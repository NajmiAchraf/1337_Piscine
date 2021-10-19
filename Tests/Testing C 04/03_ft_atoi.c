/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 17:03:00 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/10 14:27:05 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	nbr;

	a = 0;
	nbr = 0;
	while (str[a] == ' ' || (9 <= str[a] && str[a] <= 13))
		a++;
	sign = 1;
	while (str[a] == '-' || str[a] == '+')
	{
		if (str[a] == '-')
			sign *= (-1);
		a++;
	}
	while ('0' <= str[a] && str[a] <= '9')
	{
		nbr *= 10;
		nbr += str[a] - '0';
		a++;
	}
	return (nbr * sign);
}

int	main(void)
{
	int		val;
	char	str[20];

	strcpy(str, " --+-+1234ab567");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	//strcpy(str, " --+-+12349ab567");
	//val = atoi(str);
	//printf("String value = %s, Int value = %d\n", str, val);
	return (0);
}
