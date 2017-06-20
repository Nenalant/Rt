/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vnorm.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamdani <shamdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 15:55:29 by shamdani          #+#    #+#             */
/*   Updated: 2016/12/15 21:15:44 by shamdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

void	vnorm(t_vector *a)
{
	double		id;

	if (a->x + a->y + a->z == 0)
		id = 0;
	else
		id = 1 / sqrt((a->x * a->x) + (a->y * a->y) + (a->z * a->z));
	a->x = a->x * id;
	a->y = a->y * id;
	a->z = a->z * id;
}
