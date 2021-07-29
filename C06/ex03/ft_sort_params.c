/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anajmi <anajmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:20:25 by anajmi            #+#    #+#             */
/*   Updated: 2021/07/08 12:06:12 by anajmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	print(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}

int	strcomp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	char	*a;
	int		i;

	if (argc == 1)
		print(argc, &argv[0]);
	i = 1;
	while (i < argc - 1)
	{
		if (strcomp(argv[i], argv[i + 1]) > 0)
		{
			a = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = a;
			i = 0;
		}
		i++;
	}
	print(argc, argv);
	return (0);
}
