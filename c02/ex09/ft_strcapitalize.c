/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 13:06:55 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/09 21:26:02 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] < '0' || str[i - 1] > 'z')
				str[i] -= 32;
			else if (str[i - 1] > 'Z' && str[i - 1] < 'a')
				str[i] -= 32;
			else if (str[i - 1] > '9' && str[i - 1] < 'A')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
