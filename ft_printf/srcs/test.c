/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 12:45:34 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/01 14:57:32 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

int ft_printf(va_list arg)
{
	printf("%d", (int) va_arg(arg, int));
}

int test(int n, ...)
{
	va_list	args;
	int	i;

	va_start(args, n);
	i = 0;
	//int a = (int) va_arg(args, int);
	while (i < n)
	{
		ft_printf(args);
		i++;
	}
	va_end(args);
}

int main()
{
	//test(4, 2, 3, 2, 1);
	int	*p;

	//printf("%u\n", (unsigned int)p);
	printf("%i\n", -2147483648);
	printf(sizeof(p));
}
