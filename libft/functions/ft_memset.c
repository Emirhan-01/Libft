#include <stdio.h>

void    *ft_memset(void *ptr, int value, unsigned int size)
{
    unsigned char *p = ptr;

    while (size--)
    {
        *p++ = (unsigned char)value;
    }
    return (ptr);
}