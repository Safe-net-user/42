/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:22:09 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/01 14:15:01 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char *format, ...)
{
	va_list	argptr;
	size_t	i;
	size_t	chars_written;

	i = 0;
	chars_written = 0;
	if (!format || check_format(format) == -1)
		return (-1);
	va_start(argptr, check_format(format));
	while (format[i])
	{
		if (format[i] == '%')
		{
			conversion(format[i + 1], argptr, &chars_written);
			i += 2;
		else
			ft_putchar(format[i]);
		i++;
	}
	return (chars_written);
}

int main()
{
	printf("%d", ft_printf("%d", 2));
	//printf("\n", 3);
}
