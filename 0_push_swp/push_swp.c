/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <amartino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 10:28:51 by amartino          #+#    #+#             */
/*   Updated: 2020/02/07 12:17:07 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort_style(t_stack *s)
{
	t_stat	*stat;
	size_t	pivot;
//	char	*line = NULL;

//	while (get_next_line(1, &line) > 0)
	while (s->size_a > 1)
	{
		stat = get_stat(s);
//		pivot = ft_get_n_smallest(s->a, 2, 0, s->size_a);
		pivot = get_index(s->a, stat->median_a);
		pb_all_under_nb(s, pivot);
		ft_memdel((void**)&stat);
	}
	while (s->size_b > 1)
	{
		stat = get_stat(s);
		pivot = get_index(s->b, stat->median_b);
		pa_all_above_nb(s, pivot);
		ft_memdel((void**)&stat);
	}
	while (s->size_a > 0)
	{
		stat = get_stat(s);
		pb_lowest(s, stat->min_a);
		ft_memdel((void**)&stat);
	}
}

void	push_swp(t_stack *s, int ac, char **av)
{
	s = init_struct(av, ac);
	if (s == NULL)
		return ;
	mkdir("result", 0700);
	s->fd = open("result/tmp.txt", O_RDWR | O_CREAT, 0744);
	if (s->fd == FAILURE)
	{
		clean_struct(&s);
		return (ft_print_err_void("when creating result file", STD_ERR));
	}
	insertion_sort_style(s);
	if (s->verbose == TRUE)
		print_stack(s, NO_OPE, 0);
	ft_printf("done\n");
	save_final_result_in_file(s);
	clean_struct(&s);
}
