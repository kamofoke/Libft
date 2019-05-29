/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:29:26 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/29 13:37:47 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size-t n)
{
    size_t  i;
    const char *sc;
    char *des;

    i = 0;
    sc = src;
    des = dest;
    while(i < n)
    {
        des[i] = sc[i];
        if(des[i] == (char)c)
            return((void *)src);
        i++:
    }
    return(0);
}
