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

int main ()
{
    char test[14] = "Emirhan Bostan";

    ft_memset(test, 'C', 4);

    printf("%s\n", test);
}