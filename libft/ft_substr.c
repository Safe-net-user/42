/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:18:04 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/13 15:47:52 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;

	i = 0;
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s))
	{
		p[i] = '\0';
		return (p);
	}
	while (s[start] && i < len)
	{
		p[i] = s[start];
		i++;
		start ++;
	}
	p[i] = '\0';
	return (p);
}
