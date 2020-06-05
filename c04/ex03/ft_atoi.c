/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:10:58 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/12 17:15:21 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int signal;
	int number;

	i = 0;
	signal = 1;
	number = 0;
	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v') ||
			(str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = signal * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	return (number * signal);
}
