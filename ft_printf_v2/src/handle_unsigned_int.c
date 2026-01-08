/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_unsigned_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 14:59:32 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/07 11:06:18 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	str_len(int nb, t_format *f)
{
	if (size(nb) >= f->precision && size(nb) >= f->width)
		return (size(nb) + 1);
	else if (f->precision < f->width)
		return (f->width + 1);
	return (f->precision + 1);
}

static void	int_to_ascii(char *src, long nb, int i)
{
	if (nb >= 10)
		int_to_ascii(src, nb / 10, i - 1);
	src[i] = (nb % 10) + '0';
}

static void	write_flags(t_format *f, int nb, char *src, int *i)
{
	int	j;

	j = 0;
	if (f->precision == 0 && nb == 0)
		j--;
	if (size(nb) >= f->width || f->precision >= f->width)
		return ;
	if (ZERO_F & f->flags && f->precision == -1 && !(MINUS_F & f->flags))
		while (j++ < (f->width - size(nb)))
			src[(*i)++] = '0';
	else if (f->width > f->precision && f->precision > size(nb))
		while (j++ < (f->width - f->precision))
			src[(*i)++] = ' ';
	else
		while (j++ < (f->width - size(nb)))
			src[(*i)++] = ' ';
}

static void	write_param(t_format *f, unsigned int nb, char *src, int *i)
{
	unsigned int	j;

	j = 0;
	if (size(nb) < f->precision)
		while (j++ < (f->precision - size(nb)))
			src[(*i)++] = '0';
	if ((nb == 0 && f->precision != 0) || nb != 0)
	{
		int_to_ascii(src, nb, *i + size(nb) - 1);
		(*i) += size(nb);
	}
}

int	handle_unsigned_int(va_list argptr, t_format *f)
{
	unsigned int	arg;
	char			*str;
	int				i;

	arg = va_arg(argptr, int);
	str = malloc(str_len(arg, f));
	i = 0;
	if (!str)
		return (0);
	if (MINUS_F & f->flags)
	{
		write_param(f, arg, str, &i);
		write_flags(f, arg, str, &i);
	}
	else
	{
		write_flags(f, arg, str, &i);
		write_param(f, arg, str, &i);
	}
	str[i] = '\0';
	return (return_free(str));
}
