/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:28:38 by alanteri          #+#    #+#             */
/*   Updated: 2016/12/15 19:47:13 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;
	int		n;
	int		v;

	str = malloc(size);
	if (str == NULL)
		return (NULL);
	n = (int)size;
	v = 0;
	while (v < n)
	{
		str[v] = '\0';
		v++;
	}
	return ((void*)str);
}
