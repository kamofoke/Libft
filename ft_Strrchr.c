/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_srrchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:40:34 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/03 15:24:55 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	while (ft_strlen(str) >= 0)
	{
		if (*str == c)
			return (str);
		if (!*str)
			return (NULL);
		str--;
	}
	return (0);
}
