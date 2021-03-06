/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <fkante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:25:33 by fkante            #+#    #+#             */
/*   Updated: 2020/02/27 12:26:00 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_stack_a(t_stack *s)
{
	size_t	i;

	if (s->size_b != 0)
	{
		i = s->size_a;
		s->size_b = s->size_b - 1;
		s->size_a = s->size_a + 1;
		s->a[i] = s->b[s->size_b];
		s->b[s->size_b] = 0;
		s->color_nb = s->a[i];
	}
}

void	push_stack_b(t_stack *s)
{
	size_t	j;

	if (s->size_a != 0)
	{
		j = s->size_b;
		s->size_a = s->size_a - 1;
		s->size_b = s->size_b + 1;
		s->b[j] = s->a[s->size_a];
		s->a[s->size_a] = 0;
		s->color_nb = s->b[j];
	}
}

void	pa(t_stack *s)
{
	push_stack_a(s);
	ft_putendl_fd("pa", s->fd);
}

void	pb(t_stack *s)
{
	push_stack_b(s);
	ft_putendl_fd("pb", s->fd);
}

void	sort_last(t_stack *s)
{
	size_t	i;
	t_stat	*stat;

	i = 4;
	while (i > 0)
	{
		pb(s);
		i--;
	}
	while (s->size_b > 0)
	{
		stat = get_stat(s);
		pa_highest(s, stat->max_b);
		ft_memdel((void**)&stat);
	}
}
