/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:13:29 by cde-laro          #+#    #+#             */
/*   Updated: 2017/11/09 13:13:31 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*str;
	size_t				i;

	i = 0;
	str = (unsigned const char*)s;
	while (n > i)
	{
		if (str[i] == (unsigned const char)c)
			return ((void*)(str + i));
		i++;
	}
	return (NULL);
}
