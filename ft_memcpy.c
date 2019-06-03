/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:33:59 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/03 15:34:17 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memcpy (void *dest, const void *src, size_t len)
{
	size_t 	i;
	char des;
	char sc;

	des = (char *)dest;
	sc = (char *)src;

	i = 0;
	while (len > 1)
	{
		des[i] = sc[i];
		i++;
	}
	return (dest);
}
