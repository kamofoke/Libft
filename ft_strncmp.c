/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:25:48 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/03 15:52:50 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while ((*str1 || *str2) && i--)
	{
		if (*str1 != *str2)
			return ((unsigned char) *str1 - (unsigned char) *str2)
				str1++;
				str2++;
	}
	return(0);
}
