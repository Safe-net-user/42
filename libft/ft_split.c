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
int		occ_separator(char const *s, char c)
{
	unsigned int	i;
	int				occ;

	i = 0;
	occ = 0;
	while (s[i])
	{
		if (i == 0 && s[i] == c)
		{
			i++;
			printf("i -> %d, c ->  %d, s de i -> %d, occ -> %d\n", i, c, s[i], occ);
		}
		while (s[i] == c)
		{
			i++;
			printf("i -> %d, c ->  %d, s de i -> %d\n", i, c, s[i]);
		}
		i++;
	}
	return (occ);
}

char	*part(char const *s, size_t i, size_t *j)
{
	char	*p;
	size_t	k;

	p = malloc(i - *j + 1);
	if (p == NULL)
		return (NULL);
	k = 0;
	while (*j < i)
	{
		p[k] = s[*j];
		k++;
		*j++;
	}
	*j++;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	j;
	size_t	i;
	int		occ;

	i = 0;
	j = 0;
	occ = 0;
	p = malloc(occ_separator(s, c) + 2);
	while (s[i])
	{
		while (s[i] != c)
			i++;
		p[occ] = part(s, i, &j);
		occ++;
		while (s[i] == c)
		{
			i++;
			j++;
		}
	}
	p[occ + 1] = NULL;
	return (p);
}

int main()
{
	char s[] = ",,,,t,est,test,,,test";
	char	**tab;

	//tab = ft_split(s, 'c');
	printf("%d", occ_separator(s, ','));
}
