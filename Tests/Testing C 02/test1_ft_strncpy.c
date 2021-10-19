/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1_ft_strncpy.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 18:49:57 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/03 18:32:41 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (dest[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	src[] = "hey every";
	char	dest[] = "this is just a testing";
	int	n;

	n = 8;
	ft_strncpy(dest, src, n);
	ft_putstr(dest);
	return (0);
}
