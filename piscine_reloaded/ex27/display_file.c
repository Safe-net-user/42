/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:36:25 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/07 14:05:22 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	display_file(char *src)
{
	int		fd;
	int		rf;
	char	buf[4096];

	fd = open(src, O_RDONLY);
	if (fd == -1)
		return (1);
	rf = read(fd, buf, 4096);
	while (rf > 0)
	{
		write(1, buf, rf);
		rf = read(fd, buf, 4096);
		if (rf == -1)
			return (1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	if (display_file(argv[1]) == 1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}
