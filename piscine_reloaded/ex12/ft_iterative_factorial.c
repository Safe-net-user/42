/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:21:19 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/03 15:36:54 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	i;
	long	j;

	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb <= 1)
		return (1);
	i = 1;
	j = 1;
	while (i <= nb)
	{
		j = i * j;
		i++;
	}
	return (j);
}
