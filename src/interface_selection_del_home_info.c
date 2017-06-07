/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface_selection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamdani <shamdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/08 11:59:14 by shamdani          #+#    #+#             */
/*   Updated: 2017/04/14 16:30:03 by shamdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/interface_rt.h"

static void	select_del_1(t_envg *e, int x, int y)
{
	if (x > 255 && x < 355 && y > 765 && y < 790 &&
		e->e->nb_obj + 1 > e->page + 15)
	{
		e->page += 15;
		del_tab(e);
	}
	if (x > 55 && x < 155 && y > 765 && y < 790  && e->i_lst > 15 &&
		e->page > 0)
	{
		e->page -= 15;
		e->i_lst = e->page;
		del_tab(e);
	}
}

int			select_del(t_envg *e, int x, int y)
{
	int i;

	i = -1;
	while (++i < 15)
	{
		if (x > 40 && x < 60 && y > 200 + (i * 30) && y < 200 + (i * 30) + 20)
		{
			e->obj = i;
			e->light = -1;
			del_elem(e, i + e->page);
			e->i_lst = 0;
			e->page = 0;
			del_tab(e);
			return (0);
		}
	}
	select_del_1(e, x, y);
	return (i);
}

int			select_info(t_envg *e, int x, int y)
{
	int i;

	(void)e;
	(void)x;
	(void)y;
	i = -1;
	return (i);
}

static void	select_home_1(t_envg *e, int x, int y)
{
	if (x > 255 && x < 355 && y > 765 &&
		y < 790 && e->e->nb_obj + 1 > e->page + 15)
	{
		e->page += 15;
		home_tab(e);
	}
	if (x > 55 && x < 155 && y > 765 && y < 790 && e->i_lst > 15 &&
		e->page > 0)
	{
		e->page -= 15;
		e->i_lst = e->page;
		home_tab(e);
	}
}

int			select_home(t_envg *e, int x, int y)
{
	int i;

	i = -1;
	while (++i < 15)
	{
		if (x > 40 && x < 60 && y > 200 + (i * 30) && y < 200 + (i * 30) + 20)
		{
			e->obj = i;
			e->light = -1;
			modif_list(e, i + e->page);
			return (0);
		}
	}
	select_home_1(e, x, y);
	return (-1);
}