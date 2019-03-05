/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   angle_obj_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/10 16:24:46 by cde-laro          #+#    #+#             */
/*   Updated: 2017/06/20 14:30:40 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rt.h"

t_vector		ft_angle_circle(t_obj p, t_vector dir_l)
{
	(void)dir_l;
	vnorm(&p.dir);
	return (p.dir);
}

t_vector		ft_angle_square(t_obj p, t_vector dir_l)
{
	(void)dir_l;
	vnorm(&p.dir);
	return (p.dir);
}
