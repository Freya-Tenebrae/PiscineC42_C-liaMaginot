/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 13:58:16 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/14 14:06:17 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_div_mod.c"
#include <unistd.h>

int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 42;
	b = 10;
	div = 0;
	mod = 0;

	ft_div_mod (a, b, &div, &mod);
	if (div == 4 && mod == 2)
		write(1, "1", 1);
}
