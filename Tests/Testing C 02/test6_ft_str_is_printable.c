/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:18:39 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/01 14:18:42 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_printable(char str, int *is_printable_ptr)
{
	if (0 <= str && str <= 31)
	{
		*is_printable_ptr = 0;
	}
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;
	int	*ptr;

	i = 0;
	is_printable = 1;
	ptr = &is_printable;
	while (str[i] != '\0')
	{
		check_printable(str[i], ptr);
		i++;
	}
	return (is_printable);
}

int	main(void)
{
	char	str1[] = "\n\t";
	char	str2[] = "";
	char	str3[] = "AJBG651&^++#$";
	//int	ing;
	//int	*ptr;

	//ptr = &ing;
	//*ptr = 45;
	//printf("%p\n%p\n%p\n", &ptr, ptr, &ing);
	printf("%s => %d\n", str1, ft_str_is_printable(str1));
	printf("%s => %d\n", str2, ft_str_is_printable(str2));
	printf("%s => %d\n", str3, ft_str_is_printable(str3));
}
