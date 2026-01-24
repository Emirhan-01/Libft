#include<stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int x;

    i = 0;
    x = 1;

    while(*str >= 0 && *str <= 32)
    {
        str++;
    }
    if(*str == '-' || *str == '+')
    {
        if(*str == '-')
        {
            x *= -1;
            str++;
        }
        else
            str++;
    }
    
    while(*str >= 48 && *str <= 57)
    {
        i = i * 10 + (*str - 48);
        str++;
    }
    return(i * x);
}

int main()
{
    char    s[] = "     +!1244a2";

    printf("Result = %d", ft_atoi(s));
    return(0);
}