/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:29:26 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/05 17:11:58 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	i = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	while (i < n)
	{
		str2[i] = str1[i];
		if ((char *)str2 == (char *)c)
			return ((char *)str2 + i + 1);
		i++;
	}
	return (NULL);
}
