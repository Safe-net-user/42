#include <stddef.h>

static size_t ft_strlen(char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

size_t strlcat(char *dst, const char *restrict src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	n;

	n = ft_strlen(dst);
	i = n;
	j = 0;
	while (i < n - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (i)
}

int main()
{

}
