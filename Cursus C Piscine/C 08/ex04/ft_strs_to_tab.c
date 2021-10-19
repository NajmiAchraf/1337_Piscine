/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:02:27 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/15 21:00:46 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;

	src_len = ft_strlen(src);
	dest = malloc(src_len * sizeof(char) + 1);
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*conv;
	int			i;

	i = 0;
	conv = malloc(sizeof(t_stock_str) * (ac + 1));
	if (conv == NULL)
		return (NULL);
	while (i < ac)
	{
		conv[i].size = ft_strlen(av[i]);
		conv[i].str = av[i];
		conv[i].copy = ft_strdup(av[i]);
		i++;
	}
	conv[i].size = 0;
	conv[i].str = 0;
	conv[i].copy = 0;
	return (conv);
}
