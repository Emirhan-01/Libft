#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int	ft_atoi(const char *nptr);
void ft_bzero(void *s, size_t n);
int	ft_isalnum(char c);
int	ft_isalpha(char c);
int	ft_isascii(char c);
int	ft_isalnum(char c);
void	*memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
int	ft_isprint(char c);
size_t	ft_strlcat(char *dest, const char *src, unsigned int size);
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
int	ft_strncmp(const char *s1, const char *s2, unsigned int n);
char *ft_strnstr(const char *big, const char *little, size_t len);

#endif
