/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:30:01 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/30 10:24:02 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	unsigned char *str2;
	unsigned char b;

	i = 0;
	str2 = (unsigned char *)str;
	b = (unsigned char)c;
	while (i < n)
	{
		if (str2[i] == b)
			return (&str2[i]);
		i++;
	}
	return (NULL);
}
