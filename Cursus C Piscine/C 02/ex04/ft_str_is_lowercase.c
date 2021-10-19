/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:17:03 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/02 13:18:01 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
