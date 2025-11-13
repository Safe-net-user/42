
#include "ft_head.h"

size_t strlcat(char * restrict dst, const char * restrict src, size_t dst_size)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = ft_strlen((char *) dst);
	i = n;
	j = 0;
	if (dst_size <= n)
		return (n + ft_strlen((char *) src));
	while (i < dst_size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (n + ft_strlen((char *) src));
}
