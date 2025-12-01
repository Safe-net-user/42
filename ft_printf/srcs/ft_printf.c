/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:22:09 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/28 12:32:25 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char *format, ...)
{
	va_list	argptr;
	size_t	i;

	if (!format || check_format(format) == -1)
		return (-1);
	va_start(argptr, check_format(format));
	while (format[i])
	{
		if (format[i] == '%')
		{
			conversion(format[i + 1], argptr);
			i += 2;
		}
		ft_putchar(format[i]);
		i++;
	}
	return (i);
}

int main()
{
	printf("%d", ft_printf("%d", 2));
	//printf("\n", 3);
}
