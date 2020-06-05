/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:46:49 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/05 19:42:00 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int aux;
	int x;
	int y;

	aux = 0;
	x = 0;
	y = size - 1;
	while (x < size / 2)
	{
		aux = tab[x];
		tab[x] = tab[y];
		tab[y] = aux;
		x++;
		y--;
	}
}
