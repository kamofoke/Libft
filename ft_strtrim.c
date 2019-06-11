/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 16:58:22 by kamofoke          #+#    #+#             */
/*   Updated: 2019/06/11 17:01:18 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char        *ft_strtrim(char const *s)
{

   unsigned int    i;
   unsigned int    j;
   unsigned int    k;
   char            *str;

   i = 0;
   k = 0;
   while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
       i++;
   if (s[i] == '\0')
       return (ft_strcpy(ft_memalloc(sizeof(char) * 2), ""));

   j = ft_strlen(s) - 1;
   while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
       j--;

    *worked. If not we return NULL.
   str = (char *)malloc(sizeof(char)* (j - i + 2));
   if (str == NULL)
       return (NULL);

   while (k < j - i + 1)
   {
       str[k] = s[i + k];
       k++;
   }
   str[k] = '\0';
   return (str);
}
