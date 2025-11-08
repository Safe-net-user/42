/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:07:44 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/11/04 11:33:06 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int nb);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc <= 1)
		return (1);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
	return (0);
}
