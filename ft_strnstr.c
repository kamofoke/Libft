/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:05:21 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/28 10:54:36 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strnstr(const char *str1, const char str2, size_t len)
{
	size_t i;

	if (*str2 == '\0')
		return((char *)str1);

	i = 0;
	while (*str1 && len)
	{
		if (*str1 = str2[i])
			i++;
		else 
			i = 0;
		if (str2[i] == '\0')
			return((char*)str1 - i + 1);
		s++;
		len--;
	}
	return(NULL);
}
