/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_strlcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:26:59 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/06 16:25:45 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len_dest;

	len_dest = 0;
	while (str[len_dest] != '\0')
	{
		len_dest++;
	}
	return (len_dest);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	i = 0;
	if (size >= len_dest)
	{
		while ((src[i] != '\0' || dest[i] != '\0')
			&& (len_dest + i) < (size - 1))
		{
			dest[len_dest + i] = src[i];
			i++;
		}
		dest[len_dest + i] = '\0';
	}
	else if (size < len_dest)
	{
		return (len_src + size);
	}
	return (len_src + len_dest);
}

int	main(void)
{
	int		r;
	int		size = 8;
	char	src[50];
	char	dest[8];

	strcpy(dest, "This is ");
	strcpy(src, "a potentially long string");
	r = ft_strlcat(dest, src, size);
	puts(dest);
	printf("Value returned: %d\n", r);
	if (r > size)
		puts("String truncated\n");
	else
		puts("String was fully copied\n");

	strcpy(dest, "This is ");
	strcpy(src, "a potentially long string");
	r = strlcat(dest, src, size);
	puts(dest);
	printf("Value returned: %d\n", r);
	if (r > size)
		puts("String truncated\n");
	else
		puts("String was fully copied\n");
	return (0);
}
