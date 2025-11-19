#include <stdlib.h>
#include <stdio.h>

int	size(int c)
{
	if (c < 10)
		return (1);
	else if (c < 100)
		return (2);
	else if (c < 1000)
		return (3);
	else if (c < 10000)
		return (4);
	else if (c < 100000)
		return (5);
	else if (c < 1000000)
		return (6);
	else if (c < 10000000)
		return (7);
	else if (c < 100000000)
		return (8);
	else if (c < 1000000000)
		return (9);
	return (10);
}

char *int_to_ascii(char *src, int n, int i)
{
	if (n >= 10)
		int_to_ascii(src, n / 10, i - 1);
	src[i] = ((n % 10) + '0');
	return (src);
}

char *ft_itoa(int nb)
{
	short	sign;
	char	*p;
	long	n;

	sign = 0;
	n = nb;
	if (n < 0)
	{
		sign ++;
		n = -n;
	}
	p = malloc(sizeof(char) * size(n) + sign + 1);
	if (p == NULL)
		return (NULL);
	if (sign == 1)
		p[0] = '-';
	int_to_ascii(p + sign, n, size(n) - 1);
	p[size(n) + sign] = '\0';
	return (p);
}

int main()
{
	printf("%s\n", ft_itoa(1234));
	printf("%s\n", ft_itoa(-12345));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s", ft_itoa(2147483647));
}
