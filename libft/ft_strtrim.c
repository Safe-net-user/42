/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:05:22 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/13 16:27:10 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_to_removed(char const *set, char c)
{
	size_t	i;

	i = 0;
	while(set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	j;

	p = malloc(sizeof(char) * ft_strlen((char *)s1));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_to_removed(set, s1[i]) == 0)
		{
			p[j] = s1[i];
			i++;
			j++;
		}
		i++;
	}
	return (p);
}
