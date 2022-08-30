#include "philosophers.h"

int init_mutexes(t_data *data)
{
    unsigned int    i;

    i = 0;
    data->forks_mutexes = malloc(data->nb_philos * sizeof(pthread_mutex_t *));
    if (!data->forks_mutexes)
    {
        free_data(data);
        return (1);
    }
    while (i < data->nb_philos)
    {
        data->forks_mutexes[i] = init_mutex(data);
        if (!data->forks_mutexes[i])
        {
            free_data(data);
            free(data->forks_mutexes);
            return (1);
        }
        i++;
    }
    data->dead_mutex = init_mutex(data);
    if (data->dead_mutex == NULL)
        return (1);
    data->write_mutex = init_mutex(data);
    if (data->write_mutex == NULL)
        return (1);
    return (0);
}