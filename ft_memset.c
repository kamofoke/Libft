/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:08:55 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/22 11:04:33 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void 	*ft_memset (void *b, int c, size_t len)
{
	char *tmp;

	if (b == NULL)
		return(NULL);
	 
	tmp = b;
	while (len)
	{
		*tmp = c;
		tmp++;
		len--;
	}
	return (b);
}
