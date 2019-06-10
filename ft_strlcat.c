/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:36:24 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/10 09:29:14 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0' && (j > size))
	{
		if (src[i] == '\0')
		{
			ft_putchar(src[j]);
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (*dest);
}
