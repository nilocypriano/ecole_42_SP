/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:16:29 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/05 19:45:44 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int aux;
	int i;
	int c;

	aux = 0;
	i = 0;
	while (i < size)
	{
		c = i + 1;
		while (c < size)
		{
			if (tab[i] > tab[c])
			{
				aux = tab[i];
				tab[i] = tab[c];
				tab[c] = aux;
			}
			c++;
		}
		i++;
	}
}
