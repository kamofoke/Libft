/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:36:24 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/28 11:58:21 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t 	(char *dest, const  char *src, size_t size)
{
	size_t i;
	size_t b;
	size_t c;

	i = 0;
	while (dest[i] != '\0')
		i++;
	b = 0;
	while (src[b] != '\0' && b < size)
	{
		dest[i + b] = src[b];
		b++;
	}
	dest[i + b] != '\0';
	c = 0;
	while( src[c] != '\0')
		c++;
	return(c + size)
}
