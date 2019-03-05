/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:28:38 by alanteri          #+#    #+#             */
/*   Updated: 2016/12/15 19:50:39 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		x;
	char	*copie;

	x = 0;
	i = ft_strlen(s);
	if ((copie = malloc(sizeof(char) * (i + 1))) == NULL)
		return (0);
	while (x != i)
	{
		copie[x] = s[x];
		x++;
	}
	copie[x] = '\0';
	return (copie);
}
