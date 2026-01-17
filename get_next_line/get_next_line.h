/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:33:48 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/16 18:13:37 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
#endif

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 2048
#endif

#include  <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
# define LC '\n'

typedef struct s_node {
	char			str[BUFFER_SIZE];
	struct s_node	*next;
} t_node;

char	*get_next_line(int fd);
