/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:57:33 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/31 10:50:11 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memmove(void *dest, const void *src, size_t len)
{
	char *des;
	const char *sc;

	des = dest;
	sc = src;
	if (sc == des)
		return (dest);
	if (sc < des)
	{
		sc = sc + len - 1;
		des = des + len - 1;
		while(n--)
			*des-- = *sc--;
	}
	else 
		while (n--)
			*des++ = *sc++;
	return(dest);
}
