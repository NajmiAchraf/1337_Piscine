/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_ft_strcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:20:26 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/05 14:49:16 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
		i++;
	a = 0;
	while (src[a] != '\0')
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
	ft_strcat(str1, str2);
	puts(str1);
	puts(str2);
	char	str3[100] = "This is ", str4[] = "cluster e1";
	strcat(str3, str4);
	puts(str3);
	puts(str4);
	return (0);
}
