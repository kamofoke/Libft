/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 16:25:48 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/20 16:46:44 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strcmp(const char *str1, const char *str2, unsigned int i)
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
