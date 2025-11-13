/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:21:11 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/12 15:35:58 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_head.h"

size_t	ft_strlcpy(char * dst, const char * src, size_t s)
{
	size_t i;

	i = 0;
	if (s == 0)
		return (0);
	if (ft_strlen((char *) src) >= s)
		return (ft_strlen((char *) src));
	while (i < s && dst[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *) src));
}
