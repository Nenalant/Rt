/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vpscal.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamdani <shamdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:25:55 by shamdani          #+#    #+#             */
/*   Updated: 2017/01/11 17:22:36 by shamdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

double	vpscal(t_vector *a, t_vector *b)
{
	return ((a->x * b->x) + (a->y * b->y) + (a->z * b->z));
}
