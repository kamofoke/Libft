/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kamofoke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:43:38 by kamofoke          #+#    #+#             */
/*   Updated: 2019/05/21 13:55:09 by kamofoke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int 	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return(1);
	return (0);
}
