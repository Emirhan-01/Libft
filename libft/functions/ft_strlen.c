#include<string.h>
#include<stdio.h>

size_t ft_strlen(const char *s)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return(i);
}

int main()
{
    char    s[50] = "Emirhan & Serra";

    printf("String Length = %ld\n",ft_strlen(s));
}