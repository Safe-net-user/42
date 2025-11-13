/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:18:34 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/13 14:52:27 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = n - 1;
	p1 = (char *) dest;
	p2 = (char *) src;
	while (i > 0)
	{
		p1[i] = p2[i];
		i--;
	}
	p1[0] = p2[0];
	return (p1);
}
