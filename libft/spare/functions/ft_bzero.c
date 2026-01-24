#include <stdio.h>

void    *ft_bzero(void *s, unsigned int n)
{
    unsigned char *p = s;

    while(n--)
    {
        *p++ = '0';
    }
    return (s);
}

int main ()
{
    char test[14] = "Emirhan Bostan";

    ft_bzero(test, 4);

    printf("%s\n", test);
}