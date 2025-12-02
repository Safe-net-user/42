/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:50:15 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/01 15:17:38 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	call_functions(char c, va_list arg, size_t chars_written)
{
	if (c == 'c' || c == '%')
		return ft_putchar(va_arg(arg, int));
	else if (c == 'd' || 'i')
		return ft_putnbr_base(va_arg(arg, int), "0123456789");
	else if (c == 's')
		return ft_putstr(va_arg(arg, *char));
	else if (c == 'x')
		return ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		return ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else
		return ft_putnbr_pointer(va_arg(arg, long unsigned int));
}

short	valid_conversion_type(char c)
{
	char	*conversion_type;
	short	i;

	conversion_type = "dicspuxX\0";
	i = 0;
	while (conversion_type[i])
	{
		if (conversion_type[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	check_format(char *format)
{
	size_t	i;
	size_t	nbr_of_args;

	i = 0;
	nbr_of_args = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] == '%')
			i += 2;
		else if (format[i] == '%' && valid_conversion_type(format[i + 1]) == 1)
		{
			nbr_of_args += 1;
			i += 2;
		}
		else if (format[i] == '%')
			return (-1);
		else
			i++;
	}
	return (nbr_of_args);
}
