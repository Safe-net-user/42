/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 13:38:41 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/28 12:55:27 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdarg.h>

# define STDIN		0
# define STDOUT		1
# define STDERR		2

int		ft_printf(char *format, ...);
void	conversion(char c, va_list *arg);
size_t	check_format(char *format);
void	ft_putchar(char c);

#endif
