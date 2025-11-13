
#include "ft_head.h"

int		check(const char *big, const char *little, size_t i, size_t len)
{
	size_t n;
	size_t j;

	n = ft_strlen((char *) little);
	j = 0;
	while (j < n)
	{
		if (big[j + i] != little[j] || i == len)
			return (0);
		i++;
		j++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char * little, size_t len)
{
	size_t	i;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (i < len)
	{
		if (big[i] == little[0])
		{
			if (check(big, little, i, len) == 1)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
