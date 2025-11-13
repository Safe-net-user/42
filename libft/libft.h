#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_atoi(const char * str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int  c);
int		ft_isalpha(int  c);
int		ft_isascii(int  c);
int		ft_isdigit(int  c);
int		ft_isprint(int  c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void * restrict dest, const void * restrict src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *n, int value, size_t count);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
size_t	strlcat(char * restrict dst, const char * restrict src, size_t dst_size);
size_t	ft_strlcpy(char * dst, const char * src, size_t s);
size_t	ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, size_t n);
char	*ft_strnstr(const char *big, const char * little, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
