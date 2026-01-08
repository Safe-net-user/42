/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:06:15 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/15 12:56:19 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putstr_core(char *s, int fd)
{
	if (!s)
		return (write(fd, "(null)", 6));
	return (write(fd, s, ft_strlen((const char *) s)));
}

void	ft_putstr_fd(char *s, int fd)
{
	ft_putstr_core(s, fd);
}

int	ft_putstr_fd_count(char *s, int fd)
{
	return (ft_putstr_core(s, fd));
}
