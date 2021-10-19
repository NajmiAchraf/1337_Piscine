/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:08:23 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/02 13:17:56 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	check_digit(char str, int *is_digit_ptr)
{
	if (!('0' <= str && str <= '9'))
	{
		*is_digit_ptr = 0;
	}
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_digit;
	int	*ptr;

	i = 0;
	ptr = &is_digit;
	is_digit = 1;
	while (str[i] != '\0')
	{
		check_digit(str[i], ptr);
		i++;
	}
	return (is_digit);
}
