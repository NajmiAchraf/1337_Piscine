/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:17:21 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/07 12:38:56 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (fact);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
