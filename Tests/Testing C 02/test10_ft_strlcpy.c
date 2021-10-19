/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test10_ft_strlcpy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:18:48 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/04 10:31:21 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

int	main(void)
{
	char	src[50] = "this is just a testing a string";
	char	dest[50] = "13549486746412468461684138451435345814384";
	int		size;

	size = 3;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf("%s", dest);
	return (0);
}
