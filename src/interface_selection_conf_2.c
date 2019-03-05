/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interface_selection_conf_2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/14 16:25:09 by alanteri          #+#    #+#             */
/*   Updated: 2017/08/22 19:04:35 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/interface_rt.h"

int			select_conf(t_envg *e, int x, int y)
{
	if (e->mod == 1)
		return (select_add(e, x, y));
	else
		return (select_conf2(e, x, y));
	return (-1);
}
