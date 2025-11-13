/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:48:04 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/13 16:05:02 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	j;

	p = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) - 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen((char *)s1))
	{
		p[i] = s1[i];
		i++;
	}
	while (j < ft_strlen((char *)s2) - 1)
	{
		p[i] = s2[j];
		i++;
		j++;
	}
	p[i] = '\0';
	return (p);
}
