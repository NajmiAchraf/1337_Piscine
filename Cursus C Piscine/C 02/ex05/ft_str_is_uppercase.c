/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:29:01 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/02 13:18:07 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
