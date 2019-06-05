/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 11:26:27 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/05 16:02:56 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[c] != '\0')
		c++;
	dest = (char *)malloc(sizeof(*dest) * (c + 1));
	while (i < c)
	{
		dest[i] = s1[i];
		i++;
	}
	return (dest);
}
