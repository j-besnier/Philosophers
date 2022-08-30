#include "philosophers.h"

long int    get_time(void)
{
    struct timeval time;

    if (gettimofday(&time, NULL))
    {
        printf("%s\n", ERR_TIME);
        return (-1);
    }
    return (time.tv_sec * 1000 + time.tv_usec / 1000);
}