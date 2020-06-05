/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 22:20:59 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/10 22:26:37 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				x;

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	if (size == 0)
		return (x);
	else
	{
		i = 0;
		while (*src != '\0' && i < size - 1)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
		*dest = '\0';
		return (x);
	}
}
