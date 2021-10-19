/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:18:39 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/02 13:18:14 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
