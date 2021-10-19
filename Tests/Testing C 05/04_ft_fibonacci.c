/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_fibonacci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 16:10:46 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/14 09:12:30 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	c;
	int	i;

	if (index < 0)
		return (-1);
	a = 1;
	b = 0;
	c = 0;
	i = 1;
	while (i <= index)
	{
		c = b + a;
		a = b;
		b = c;
		i++;
	}
	return (c);
}

int	ft_jfibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (0 < index && index <= 2)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

//int	main(int argc, char **argv)
//{
//	int	i;
//
//	i = 1;
//	while (i < argc && argc >= 2)
//	{
//		printf("ft_fibonacci : %d\n", ft_fibonacci(atoi(argv[i])));
//		i++;
//	}
//	return (0);
//}

int	main(int argc, char **argv)
{
	int	a;

	a = atoi(argv[1]);
	(void) argc;
	if (atoi(argv[1]) < atoi(argv[2]))
	{		
		while (a < atoi(argv[2]))
		{
			printf("ft_fibonacci(%d) => %d\n", a, ft_fibonacci(a));
			a++;
		}
	}
	return (0);
}
