/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 00:40:47 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/12 22:21:54 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char **str, int num)
{
	int i;
	int j;

	j = 1;
	while (j < num)
	{
		i = 0;
		while (str[j][i] != '\0')
		{
			write(1, &str[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i] != '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int	*aux;

	if (argc == 1)
		return (0);
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] + aux;
			}
			j++;
		}
		i++;
	}
	ft_putstr(arv, argc);
	return (0);
}
