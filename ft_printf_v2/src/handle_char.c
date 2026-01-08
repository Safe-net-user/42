/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:01:43 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/07 12:16:10 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_str(t_format *f)
{
	if (1 > f->width && 1 > f->precision)
		return (1);
	else if (f->width > f->precision)
		return (f->width);
	return (f->precision);
}

static void	write_param(char *src, char arg, t_format *f, int *i)
{
	int	j;

	j = 0;
	if (MINUS_F & f->flags && arg != '\0')
		src[(*i)++] = arg;
	if (f->width > 1 && arg != '\0')
		while (j++ < f->width - 1)
			src[(*i)++] = ' ';
	if (!(MINUS_F & f->flags) && arg != '\0')
		src[(*i)++] = arg;
}

int	handle_char(va_list argptr, t_format *f)
{
	char	arg;
	char	*src;
	int		i;
	int		count;

	arg = va_arg(argptr, int);
	src = malloc(size_str(f) + 1);
	i = 0;
	count = 0;
	if (!src)
		return (0);
	write_param(src, arg, f, &i);
	src[i] = '\0';
	count = putstr_fd(src, STDOUT);
	free(src);
	if (arg == '\0')
		return (count + 1);
	return (count);
}
