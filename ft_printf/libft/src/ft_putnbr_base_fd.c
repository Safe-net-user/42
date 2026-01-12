/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 11:16:27 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/03 11:26:11 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../include/libftprintf.h"

static int	size(int arg, const char *base)
{
	int	i;

	i = 0;
	while (arg > ft_strlen(base))
	{
		arg = arg / ft_strlen(base);
		i++;
	}
	return (i + 1);
}

static char	*int_to_ascii(const char *base, char *src, long n, int i)
{
	if (n >= ft_strlen(base))
		int_to_ascii(base, src, n / ft_strlen(base), i - 1);
	src[i] = (base[n % ft_strlen(base)]);
	return (src);
}

static int	ft_putnbr_base_core(unsigned int arg, const char *base)
{
	char	*p;
	int		i;

	i = size(arg, base);
	p = malloc(i + 1);
	if (p == NULL)
		return (0);
	p = int_to_ascii(base, p, arg, i);
	p[i] = '\0';
	return (ft_putstr_fd_count(p, STDOUT));
}

void	ft_putnbr_base_fd(unsigned int arg, const char *base)
{
	ft_putnbr_base_core(arg, base);
}

int	ft_putnbr_base_fd_count(unsigned int arg, const char *base)
{
	return (ft_putnbr_base_core);
}
