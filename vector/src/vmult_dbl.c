/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vmult_dbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:44:40 by alanteri          #+#    #+#             */
/*   Updated: 2017/01/11 17:21:49 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/vector.h"

t_vector	vmult_dbl(t_vector a, double b)
{
	t_vector ret;

	ret = new_v(a.x * b, a.y * b, a.z * b);
	return (ret);
}
