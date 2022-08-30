#include "philosophers.h"

void free_data(t_data *data)
{
    unsigned int    i;

    i = 0;
    if (data->write_mutex)
        free(data->write_mutex);
    if (data->dead_mutex)
        free(data->dead_mutex);
    while (i < data->nb_philos)
    {
        if (data->forks_mutexes[i] == NULL)
            break;
        free(data->forks_mutexes[i]);
        i++;
    }
    if (data->forks_mutexes)
        free(data->forks_mutexes);
    free_philos(data);
}