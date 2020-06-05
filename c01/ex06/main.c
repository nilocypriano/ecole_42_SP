/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcyprian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 16:33:27 by bcyprian          #+#    #+#             */
/*   Updated: 2019/12/05 19:38:49 by bcyprian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

int		ft_strlen(char *str);

int main() {
	char str[4] = "ola";

	int len = ft_strlen(str);

	printf("%d\n", len);

    return 0;
}
