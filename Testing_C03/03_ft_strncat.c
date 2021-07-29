/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_strncat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:59:29 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/05 15:03:55 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	a = 0;
	while (src[a] != '\0' && a < nb)
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}

int	main(void)
{
	char	str1[100] = "This is ", str2[] = "cluster e1";
	// concatenates str1 and str2
	// the resultant string is stored in str1.
	ft_strncat(str1, str2, 0);
	puts(str1);
	puts(str2);
	char	str3[100] = "This is ", str4[] = "cluster e1";
	strncat(str3, str4, 0);
	puts(str3);
	puts(str4);
	return (0);
}
