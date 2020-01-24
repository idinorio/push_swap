/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sublist_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <amartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:13:54 by amartino          #+#    #+#             */
/*   Updated: 2020/01/24 17:10:58 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sort_sublist_on_b(t_stack *s)
{
	size_t		size;

	size = s->size_b;
	while (s->size_b > 0)
		pa_highest(s, s->size_b);
	while (size > 0)
	{
		ra(s);
		size--;
	}
}

void 		sort_min_size_sublist_available(t_stack *s)
{
	sort_sublist_on_b(s);
	push_next_sublist_on_b(s, SUBLIST_MIN_SIZE);
	sort_sublist_on_b(s);
}

void		push_next_sublist_on_b(t_stack *s, size_t size)
{
	while (size > 0)
	{
		pb(s);
		size--;
	}
}

void		rra_the_remainder(t_stack *s)
{
	size_t		remainder_size;
	size_t		largest_sublist;

	largest_sublist = SUBLIST_MIN_SIZE * ft_pow_positive(2, s->exponent_max);
	remainder_size = s->size_a + s->size_b - largest_sublist;
	while (remainder_size > 0)
	{
		rra(s);
		remainder_size--;
	}
}
