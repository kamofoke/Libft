/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:14:38 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/05 14:35:13 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, void *src, size_t len)
{
	size_t	i;

	i = 0;
	while (1 < len)
	{
		if (((char *)dest)[i] != ((char *)src)[i])
			return (((char *)dest)[i] - ((char *)src)[i]);
		i++;
	}
	return (0);
}
