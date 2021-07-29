/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:17:03 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/01 11:17:06 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_lowercase(char str, int *is_lowercase_ptr)
{
	if (!('a' <= str && str <= 'z'))
	{
		*is_lowercase_ptr = 0;
	}
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;
	int	*ptr;

	i = 0;
	is_lowercase = 1;
	ptr = &is_lowercase;
	while (str[i] != '\0')
	{
		check_lowercase(str[i], ptr);
		i++;
	}
	return (is_lowercase);
}

int	main(void)
{
	char	str1[] = "AJBGzdv";
	char	str2[] = "";
	char	str3[] = "dhvnccanh";

	printf("%s => %d\n", str1, ft_str_is_lowercase(str1));
	printf("%s => %d\n", str2, ft_str_is_lowercase(str2));
	printf("%s => %d\n", str3, ft_str_is_lowercase(str3));
}
