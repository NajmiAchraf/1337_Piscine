/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:46:49 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/03 14:14:22 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	//int	div;
	//int	mod;

	//div = *a / *b;
	//mod = *a % *b;
	//*a = div;
	//*b = mod;

	int sv;

	sv = *a;
	*a = sv / *b;
	*b = sv % *b;
}

int	main(void)
{
	int f, k;
	int *a;
	int *b;

	a = &f;
	b = &k;
	f = 5;
	k = 3;
	ft_ultimate_div_mod(a, b);
	printf("%d  %d", *a, *b);
}