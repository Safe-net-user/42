/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gd-hallu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 14:23:59 by gd-hallu          #+#    #+#             */
/*   Updated: 2025/12/01 15:17:45 by gd-hallu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int size(int arg)
{
	int	i;

	i = 0;
	while (arg > 16)
	{
		arg = arg / 16;
		i++;
	}
	return (i + 1);
}

size_t	ft_putnbr_base(va_list arg, char *base)
{
	char	*p;

	p = malloc(size(va_arg(arg, unsigned int)) + 1);

}

int main()
{
	printf("%x\n", 456);
	printf("%d", size(34));
}
