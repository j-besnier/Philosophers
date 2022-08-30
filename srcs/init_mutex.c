#include "philosophers.h"

pthread_mutex_t *init_mutex(t_data *data)
{
    pthread_mutex_t *res;

    res = malloc(sizeof(pthread_mutex_t));
    if (!res)
    {
        free_data(data);
        ft_error(ERR_MALLOC);
        return (NULL);
    }
    if (pthread_mutex_init(res, NULL))
    {
        free(res);
        free_data(data);
        ft_error(ERR_MUTINIT);
        return (NULL);
    }
    return (res);
}