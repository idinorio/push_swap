/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <amartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 16:23:57 by amartino          #+#    #+#             */
/*   Updated: 2019/11/23 19:38:10 by amartinod        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		print_stack(t_stack *s)
{
	size_t	i;
	size_t	size_max;

	i = 0;
	size_max = s->size_a + s->size_b;
	system("clear");
	ft_printf("\t\t\t\t\t _______________________________   _____________________________\n");
	ft_printf("\t\t\t\t\t|\t\tSTACK A\t\t| |\t\tSTACK B\t\t|\n");
	ft_printf("\t\t\t\t\t ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔   ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔\n");
	ft_printf("\t\t\t\t\t _______________________________   _____________________________\n");
	while (i < size_max)
	{
		ft_printf("\t\t\t\t\t|\t\t%d\t\t| |\t\t%d\t\t|\n", s->a[i], s->b[i]);
		i++;
	}
	ft_printf("\t\t\t\t\t ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔   ▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔▔\n");
}
