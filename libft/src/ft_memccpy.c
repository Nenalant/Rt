/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:28:38 by alanteri          #+#    #+#             */
/*   Updated: 2016/12/15 19:47:17 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*curdst;
	unsigned char	*cursrc;
	int				i;

	curdst = (unsigned char *)dst;
	cursrc = (unsigned char *)src;
	i = 0;
	while (i < (int)n)
	{
		*curdst = *cursrc;
		if (*cursrc == (unsigned char)c)
			return (curdst + 1);
		i++;
		curdst++;
		cursrc++;
	}
	return (NULL);
}
