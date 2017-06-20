/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vsize.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamdani <shamdani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 17:04:32 by shamdani          #+#    #+#             */
/*   Updated: 2017/01/11 17:23:26 by shamdani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

double	vsize(t_vector v)
{
	if (v.x == 0 && v.y == 0 && v.z == 0)
		return (0);
	return (sqrt(vpscal(v, v)));
}
