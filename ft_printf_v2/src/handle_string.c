/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/14 18:03:02 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/07 12:04:38 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

static size_t	size_str(char *src, t_format *f)
{
	size_t	n;

	n = ft_strlen(src);
	if (n >= f->width && n >= f->precision)
		return (n);
	else if (f->width > f->precision)
		return (f->width);
	return (f->precision);
}

static void write_flags(char *arg, char *src, t_format *f, int *i)
{
	int j = 0;

	if (f->precision >= 0 && f->precision < ft_strlen(arg))
		while (j++ < f->width - f->precision)
			src[(*i)++] = ' ';
	else if (ft_strlen(arg) < f->width)
		while (j++ < f->width - ft_strlen(arg))
			src[(*i)++] = ' ';
}

static void	write_param(char *arg, char *src, t_format *f, int *i)
{
	int	j;

	j = 0;
	if (f->precision >= 0 && f->precision < ft_strlen(arg))
		while ((j < f->precision && arg[j]))
			src[(*i)++] = arg[j++];
	else
		while (arg[j])
			src[(*i)++] = arg[j++];
}

int	handle_string(va_list arg, t_format *f)
{
	char	*src_arg;
	char	*src;
	int		i;

	src_arg = va_arg(arg, char *);
	if (src_arg == NULL) {
		if (f->precision < 0 || f->precision >= 6)
			src_arg = "(null)";
		else
			src_arg = "";
	}
	src = malloc(size_str(src_arg, f) + 1);
	if (src == NULL)
		return (0);
	i = 0;
	if (MINUS_F & f->flags)
	{
		write_param(src_arg, src, f, &i);
		write_flags(src_arg, src, f, &i);
	}
	else
	{
		write_flags(src_arg, src, f, &i);
		write_param(src_arg, src, f, &i);
	}
	return (return_free(src));
}
