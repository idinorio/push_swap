/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkante <fkante@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:43:12 by fkante            #+#    #+#             */
/*   Updated: 2020/02/24 14:12:35 by fkante           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		clean_tmp(char ***tmp, size_t i)
{
	while (i > 0)
	{
		i--;
		ft_strdel((*tmp) + i);
	}
	ft_memdel((void**)tmp);
}

void		clean_struct(t_stack **s)
{
	ft_memdel((void**)&((*s)->a));
	ft_memdel((void**)&((*s)->b));
	ft_memdel((void**)s);
}
