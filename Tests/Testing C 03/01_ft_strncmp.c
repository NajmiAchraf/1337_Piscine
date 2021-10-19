/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:51:31 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/05 14:33:25 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "ft_strcpy.c"

//int	ft_strncmp(char *s1, char *s2, unsigned int n)
//
//	unsigned int	i;
//
//	i = 0;
//	while ((s1[i] != '\0' || s2[i] != '\0') && i < (n - 1))
//	{
//		if (s1[i] != s2[i])
//		{
//			return (1);
//		}
//		i++;
//	}
//	return (0);
//}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(void)
{
	char	str1[15];
	char	str2[15];
	int		ret;

	strcpy(str1, "ABC");
	strcpy(str2, "ABCDdbdb");
	ret = ft_strncmp(str1, str2, 4);
	if (ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if (ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	printf("Value returned by ft_strncmp() is:  %d\n", ret);
	ret = 0;
	ret = strncmp(str1, str2, 4);
	if (ret < 0)
	{
		printf("str1 is less than str2\n");
	}
	else if (ret > 0)
	{
		printf("str2 is less than str1\n");
	}
	else
	{
		printf("str1 is equal to str2\n");
	}
	printf("Value returned by strncmp() is:  %d\n", ret);
	return (0);
}
