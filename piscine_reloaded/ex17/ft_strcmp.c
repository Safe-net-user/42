/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:46:03 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/04 11:05:48 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*int main()
{
	printf("%d\n", strcmp("asa", "as"));
	printf("%d\n", ft_strcmp("asa", "as"));
	printf("%d\n", strcmp("as", "asa"));
	printf("%d\n", ft_strcmp("as", "asa"));
	printf("%d\n", strcmp("aaza", "aazz"));
	printf("%d\n", ft_strcmp("aaza", "aazz"));
	printf("%d\n", strcmp("aa", "aa"));
	printf("%d\n", ft_strcmp("aa", "aa"));
}*/
