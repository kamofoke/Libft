/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:06:13 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/03 16:13:23 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_strstr(const char *str1, const char *str2)
{
	int i;
	int b;

	if (str2[0] == '\0')
		return (str1);
	i = 0;
	while (str1[i] != '\0')
	{
		b = 0;
		while (str2[b] != '\0')
		{
			if (str1[i + b] != str2[b])
				return (str + i);
			b++;
		}
		i++;
	}
	return (0);
}
