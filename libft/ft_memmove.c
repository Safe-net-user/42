#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	i;
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
char	*fill_temp_array(const void *src)
{
	char	*arr;
	char	*temp_src;
	size_t	i;
	size_t	src_size;

	i = 0;
	arr = (char *) src;
	src_size = ft_strlen(arr);
	temp_src[src_size];
	while (arr[i])
	{
		temp_src[i] = arr[i];
		i++;
	}
	return (temp_src);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp_src;
	char	*dest_casted;
	size_t		i;

	i = 0;
	dest_casted = (char *) dest;
	temp_src = fill_temp_array(src);
	while (i < n)
	{
		dest_casted[i] = temp_src[i];
		i++;
	}
	return (dest_casted);
}

int main()
{
	char	arr[] = "abcdef";
	char *p1 = &arr[2];
	char *p2 = &arr[0];
	printf("%s", ft_memmove(p1, p2, 5));
}
