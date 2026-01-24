#include <stdio.h>

void    *ft_memccpy(void *dest, void *src, void *nc, int n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    unsigned char *c = (unsigned char *)nc;
    int i;

    i = 0;
    while (i < n)
    {
        if (s[i] == *c)
        {
            d[i] = s[i];
            return (&d[i + 1]);
        }
        d[i] = s[i];
        i++;
    }
    return NULL;
}