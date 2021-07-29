/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 17:12:05 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/03 20:20:46 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*process(char *str)
{
	char	c;
	int		i;

	i = 0;
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i + 1] != '\0')
	{
		c = str[i];
		if (!('0' <= c && c <= '9') && !('a' <= c && c <= 'z')
			&& !('A' <= c && c <= 'Z'))
		{
			if ('a' <= str[i + 1] && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	process(str);
	return (str);
}
