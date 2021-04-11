/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaginot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:50:45 by cmaginot          #+#    #+#             */
/*   Updated: 2021/03/26 15:51:12 by cmaginot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_range.c"

int	main()
{
	int *tab;
	int size;
	int i;
	
	tab = ft_range(-45, 25);
	size = 70;
	i = 0;
	while (i++ < size)
		printf("%i\n", tab[i-1]);
}
