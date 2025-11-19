#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	size_t	i;

	p = malloc(sizeof(char) * ft_strlen((char*)s));
	i = 0;
	if (p == NULL)
		return (NULL);
	while (i < ft_strlen((char*)s))
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
