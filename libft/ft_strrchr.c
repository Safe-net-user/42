/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:50:18 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/13 14:54:57 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		occ;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (s[i] == c)
			occ = i;
		i++;
	}
	if (occ == 0)
		return ((char *) &s[i]);
	return ((char *) &s[occ]);
}
