/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:00:07 by anajmi            #+#    #+#             */
/*   Updated: 2021/06/30 21:00:09 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	check_alpha(char str, int *is_alpha_ptr)
{
	if (!('a' <= str && str <= 'z')
		&& !('A' <= str && str <= 'Z'))
	{
		*is_alpha_ptr = 0;
	}
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;
	int	*ptr;

	i = 0;
	is_alpha = 1;
	ptr = &is_alpha;
	while (str[i] != '\0')
	{
		check_alpha(str[i], ptr);
		i++;
	}
	return (is_alpha);
}

int	main(void)
{
	char	str1[] = "AJBGzdv5";
	char	str2[] = "";
	char	str3[] = "dhSccaSW";

	printf("%s => %d\n", str1, ft_str_is_alpha(str1));
	printf("%s => %d\n", str2, ft_str_is_alpha(str2));
	printf("%s => %d\n", str3, ft_str_is_alpha(str3));
}
