/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:29:01 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/01 11:29:05 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_uppercase(char str, int *is_uppercase_ptr)
{
	if (!('A' <= str && str <= 'Z'))
	{
		*is_uppercase_ptr = 0;
	}
}

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	is_uppercase;
	int	*ptr;

	i = 0;
	is_uppercase = 1;
	ptr = &is_uppercase;
	while (str[i] != '\0')
	{
		check_uppercase(str[i], ptr);
		i++;
	}
	return (is_uppercase);
}

int	main(void)
{
	char	str1[] = "AJBGzdv";
	char	str2[] = "";
	char	str3[] = "KSDHBFJV";

	printf("%s => %d\n", str1, ft_str_is_uppercase(str1));
	printf("%s => %d\n", str2, ft_str_is_uppercase(str2));
	printf("%s => %d\n", str3, ft_str_is_uppercase(str3));
}
