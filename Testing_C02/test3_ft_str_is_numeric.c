/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:08:23 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/01 09:08:25 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	main(void)
{
	char	str1[] = "eeeeeee";
	char	str2[] = "";
	char	str3[] = "4561561";

	printf("%s => %d\n", str1, ft_str_is_numeric(str1));
	printf("%s => %d\n", str2, ft_str_is_numeric(str2));
	printf("%s => %d\n", str3, ft_str_is_numeric(str3));
}
