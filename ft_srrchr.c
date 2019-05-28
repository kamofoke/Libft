/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:40:34 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/28 11:02:32 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while(s[i])
		i++;
	if (c == 0)
		return ((char *)s - 1);
	while (i > 0)
	{
		i--;
		if (s[i] == c)
			return((char *)s + i)
	}
	return (NULL);
}
