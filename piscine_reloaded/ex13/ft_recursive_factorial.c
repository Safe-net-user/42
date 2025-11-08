/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:50:04 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/03 16:03:21 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*int main()
{
	printf("%d", ft_recursive_factorial(7));
	printf("%d", ft_recursive_factorial(1));
	printf("%d", ft_recursive_factorial(0));
	printf("%d", ft_recursive_factorial(-8));
}*/
