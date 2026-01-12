/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:06:33 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/03 08:16:21 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putchar_core(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

void	ft_putchar_fd(char c, int fd)
{
	ft_putchar_core(c, fd);
}

int	ft_putchar_fd_count(char c, int fd)
{
	return (ft_putchar_core(c, fd));
}
