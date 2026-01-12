/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 16:01:43 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/12 10:39:03 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	size_str(t_format *f, char c)
{
	if (1 >= f->width)
		return (1);
	return (f->width);
}

int	putstr_c(char *src, int size_str)
{
	int	j;

	j = 0;
	while (j < size_str)
		write(STDOUT, &(src[j++]), 1);
	return (size_str);
}

static void	write_param(char *src, char arg, t_format *f, int *i)
{
	int	j;

	j = 0;
	if (MINUS_F & f->flags)
		src[(*i)++] = arg;
	if (f->width > 1)
		while (j++ < f->width - 1)
			src[(*i)++] = ' ';
	if (!(MINUS_F & f->flags))
		src[(*i)++] = arg;
}

int	handle_char(va_list argptr, t_format *f)
{
	char	arg;
	char	*src;
	int		i;
	int		count;

	arg = va_arg(argptr, int);
	src = malloc(size_str(f, arg) + 1);
	i = 0;
	count = 0;
	if (!src)
		return (0);
	write_param(src, arg, f, &i);
	src[i] = '\0';
	count = putstr_c(src, size_str(f, arg));
	free(src);
	return (count);
}
