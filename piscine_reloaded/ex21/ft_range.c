/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 15:40:09 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/04 16:52:25 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	mini;

	i = 0;
	mini = min;
	if (min >= max)
		return (NULL);
	arr = malloc((max - min) * sizeof(int));
	while (i < (max - min))
	{
		arr[i] = mini;
		i++;
		mini++;
	}
	return (arr);
}
