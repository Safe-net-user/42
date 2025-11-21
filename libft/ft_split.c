/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:27:18 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/14 12:00:33 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	occ_separator(char const *s, char c)
{
	unsigned int	i;
	int				occ;

	i = 0;
	occ = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			occ ++;
		while (s[i] != c && s[i])
			i++;
	}
	return (occ);
}

char	*part(char const *s, size_t i, size_t *j, char **arr)
{
	char	*p;
	int		l;
	size_t	k;

	p = malloc(i - *j + 1);
	l = 0;
	k = 0;
	if (p == NULL)
	{
		while (arr[l])
		{
			free(arr[l]);
			l++;
		}
		free(arr);
		return (NULL);
	}
	while (*j < i)
	{
		p[k] = s[*j];
		k++;
		(*j)++;
	}
	p[k] = '\0';
	return (p);
}

char	**final_arr(char **p, char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	occ;

	i = 0;
	j = 0;
	occ = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > j)
		{
			p[occ] = part(s, i, &j, p);
			occ++;
		}
	}
	p[occ] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	p = malloc(sizeof(char *) * (occ_separator(s, c) + 1));
	if (p == NULL)
		return (NULL);
	return (final_arr(p, s, c));
}
