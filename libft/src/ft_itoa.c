/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alanteri <alanteri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:28:38 by alanteri          #+#    #+#             */
/*   Updated: 2016/12/15 19:45:48 by alanteri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_itoa(int nb)
{
	int		len;
	char	*rez;
	int		tmp;

	len = nb < 0 ? 1 : 0;
	tmp = nb ? nb : 1;
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(rez = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	rez[len] = '\0';
	nb < 0 ? rez[0] = '-' : 0;
	nb = nb < 0 ? -nb : nb;
	nb ? 0 : (rez[0] = '0');
	while (nb && ((len--) || 1))
	{
		rez[len] = '0' + nb % 10;
		nb /= 10;
	}
	return (rez);
}
