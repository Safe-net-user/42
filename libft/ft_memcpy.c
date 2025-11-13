#include "libft.h"

void	*ft_memcpy(void * restrict dest, const void * restrict src, size_t n)
{
	size_t		i;
	char	*p1;
	char	*p2;

	p1 = (char *) dest;
	p2 = (char *) src;
	i = 0;
	while (i < n)
	{
		p1[i] = p2[i];
		i++;
	}
	return (p1);
}
