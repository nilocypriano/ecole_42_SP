/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:23:03 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/04 22:56:58 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_numb(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (c > b)
					ft_print_numb(a, b, c);
				if (a != '7')
					ft_putchar();
				if (c <= '9')
					c++;
			}
			b++;
		}
		a++;
	}
}
