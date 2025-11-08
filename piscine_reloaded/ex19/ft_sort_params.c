/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:21:51 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/04 14:15:10 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char nb);

void	print_sol(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar(10);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	swap_str(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void	select(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i + 1])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap_str(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	print_sol(argv);
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	else if (argc == 2)
		print_sol(argv);
	else
	{
		select(argv);
	}
	return (0);
}
