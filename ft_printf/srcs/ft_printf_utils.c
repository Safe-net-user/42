/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:50:15 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/28 12:32:19 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
void	conversion(char c, va_list *arg)
{
	return;
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
