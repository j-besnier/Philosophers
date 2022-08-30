#include "philosophers.h"

void free_philos(t_data *data)
{
    if (data->forks)
        free(data->forks);
    if (data->philos)
        free(data->philos);
}