/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:33:59 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/30 10:29:01 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void 	*ft_memcpy (void *dest, void *src, size_t len)
{
	size_t 	i;

	i = 0;
	while (1 < len)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
	}
	return (dest)
}
