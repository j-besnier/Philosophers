#include "philosophers.h"

int ft_atoui(char *str, unsigned int *n)
{
    int             i;
    long int    overflow;

    i = 0;
    *n = 0;
    overflow = 0;
    if (str[i] == '\0')
        return (1);
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        overflow = overflow * 10 + str[i] - '0';
        if (overflow > UINT_MAX)
            return (1);
        i++;
    }
    if (str[i] != '\0')
        return (1);
    *n = overflow;
    return (0);
}