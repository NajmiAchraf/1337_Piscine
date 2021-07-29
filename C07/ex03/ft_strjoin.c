/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 21:01:37 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/13 19:41:30 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src, int add_start)
{
	int	a;

	a = 0;
	while (src[a] != '\0')
	{
		dest[add_start + a] = src[a];
		a++;
	}
	return (dest);
}

int	malloc_len(int size, char **strs, char *sep)
{
	int	malloc_size;
	int	i;
	int	j;

	malloc_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			j++;
		malloc_size += j;
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	malloc_size += i * (size - 1) + 1;
	return (malloc_size);
}

char	*join_str_cat(int size, char *string, char **strs, char *sep)
{
	int		i;
	int		j;
	int		add_start;

	string[0] = '\0';
	i = 0;
	add_start = 0;
	while (i < size)
	{
		j = 0;
		string = ft_strcat(string, strs[i], add_start);
		while (strs[i][j] != '\0')
			j++;
		add_start += j;
		i++;
		if (i == size)
			break ;
		j = 0;
		string = ft_strcat(string, sep, add_start);
		while (sep[j] != '\0')
			j++;
		add_start += j;
	}
	string[add_start] = '\0';
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		malloc_size;
	char	*string;

	if (1 <= size)
	{
		malloc_size = malloc_len(size, strs, sep);
		string = (char *)malloc(malloc_size * sizeof(char));
		if (!string)
			return (NULL);
		string = join_str_cat(size, string, strs, sep);
	}
	else
	{
		string = (char *)malloc(sizeof(char));
		string[0] = '\0';
	}
	return (string);
}
