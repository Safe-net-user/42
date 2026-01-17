/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <gd-hallu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 15:33:19 by gd-hallu          #+#    #+#             */
/*   Updated: 2026/01/16 23:22:41 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	clear_list(t_node **lst)
{
	t_node	*current;
	t_node	*next;

	current = *lst;
	if (current == NULL)
		return ;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*lst = NULL;
}

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (1);
}

size_t	count_LC(char *str)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i] && i < BUFFER_SIZE)
		if (str[i++] == LC)
			count++;
	return (count);
}

t_node	*create_node(char *str)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (NULL);
	ft_strcpy(new->str, str);
	new->next = NULL;
	return (new);
}

int	add_back(char *str, t_node **lst)
{
	t_node	*new;
	t_node	*curr;

	new = create_node(str);
	if (!new)
		return (-1);
	if (*lst == NULL)
	{
		*lst = new;
		return (0);
	}

	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
	return (0);
}

size_t	browse_ll(int count, t_node **lst)
{
	size_t	i;
	size_t	count_len;
	size_t	LC_counter;
	t_node	*curr;

	i = 0;
	LC_counter = 0;
	count_len = 0;
	if (!*lst)
		return (0);
		curr = *lst;
	while (curr)
	{
		while (curr->str[i] && i < BUFFER_SIZE)
		{
			if (curr->str[i] == LC)
				LC_counter++;
			if (LC_counter >= count)
				count_len++;
			if (LC_counter > count)
				return (count_len);
			i++;
		}
		curr = curr->next;
	}
	return (count_len);
}

size_t	len_str(int fd, int count, t_node **lst)
{
	char	buff[BUFFER_SIZE];
	size_t	LC_counter;
	size_t	bytes_read;

	LC_counter = count;
	while (read(fd, buff, BUFFER_SIZE) > 0 && LC_counter == count)
	{
		if (add_back(buff, lst) < 0)
		{
			clear_list(lst);
			return (0);
		}
		LC_counter += count_LC(buff);
	}
	return (browse_ll(count, lst));
}

int	get_next_segment(int count, char *str, t_node **lst)
{
	size_t	i;
	size_t	j;
	size_t	LC_counter;
	t_node	*curr;

	i = 0;
	j = 0;
	LC_counter = count;
	if (!*lst)
		return (0);
	curr = *lst;
	while (curr && LC_counter <= count)
	{
		while (curr->str[i] && LC_counter <= count)
		{
			if (curr->str[i] == LC)
				LC_counter++;
			if (LC_counter >= count)
				str[j++] = curr->str[i++];
		}
	}
	str[j] = '\0';
	return (1);
}

char	*get_next_line(int fd)
{
	static int	count;
	char		*str;
	t_node		*lst;
	size_t		len;

	lst = NULL;
	len = len_str(fd, count, &lst);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	if (!get_next_segment(count, str, &lst))
		return (NULL);
	count++;
	return (str);
}

int main()
{
	t_node	*lst;
	int fd = open("./get_next_line.h", O_RDONLY);
	/*lst = NULL;
	add_back("tytyt", &lst);
	printf("%s", lst->str);*/
	for (int i = 0; i < 10; i++)
	{
		printf("%s", get_next_line(fd));
	}
}
