#include <stdio.h>

void    *ft_memcpy(void *dest, void *src, int n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    int i;

    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}

int     main ()
{
    char dest[13] = "EmirhanBostan";
    char src[7] = "Serra  ";

    ft_memcpy(dest, src, 7);

    printf("%s\n", dest);
}