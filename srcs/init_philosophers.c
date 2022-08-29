#include "philosophers.h"

int init_philosophers(t_data *data)
{
    unsigned int i;

    i = -1;
    data->philos = malloc(data->nb_philos * sizeof(t_philosopher));
    if (!data->philos)
        return (ft_error(ERR_MALLOC));
    data->forks = malloc(data->nb_philos * sizeof(int));
    if (!data->forks)
    {
        free(data->philos);
        return (ft_error(ERR_MALLOC));
    }
    while (++i < data->nb_philos)
    {
        data->philos[i].position = i;
        data->philos[i].left_fork = i;
        data->philos[i].right_fork = (i + 1) % data->nb_philos;
        data->philos[i].last_meal = 0;
    }
    return (0);
}