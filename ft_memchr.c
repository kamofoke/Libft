/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:30:01 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/03 15:04:29 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *s2;
	unsigned char b;
	int i;

	i = 0;
	s2 = (unsigned char *)s;
	b = (unsigned char)c;
	while (i < n)
	{
		if (s2[i] == b)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}
