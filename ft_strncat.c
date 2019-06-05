/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:44:36 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/05 16:17:33 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	l = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[i] != '\0' && (j < n))
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	return (s1);
}
