/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:28:38 by alanteri          #+#    #+#             */
/*   Updated: 2016/12/15 19:54:15 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		n;

	str = malloc(sizeof(char) * ft_strlen(s));
	if (str == NULL)
		return (NULL);
	n = 0;
	while (s[n] != '\0')
	{
		str[n] = f(s[n]);
		n++;
	}
	return (str);
}
