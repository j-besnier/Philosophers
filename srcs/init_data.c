#include "philosophers.h"

int init_data(t_data *data, int argc, char **argv)
{
    if (argc < 5 || argc > 6)
    {
        printf("%s\n", ERR_ARGNB);
        return (1);
    }
    if (ft_atoui(argv[1], &data->nb_philos) || data->nb_philos == 0
    || ft_atoui(argv[2], &data->time_to_die) || data->time_to_die == 0
    || ft_atoui(argv[3], &data->time_to_eat) || data->time_to_eat == 0
    || ft_atoui(argv[4], &data->time_to_sleep) || data->time_to_sleep == 0)
        return (1);
    if (argc == 6)
    {
        if (ft_atoui(argv[5], &data->nb_meals) || data->nb_meals == 0)
            return (1);
    }
    else
        data->nb_meals = -1;
    data->forks_mutexes = NULL;
    data->write_mutex = NULL;
    data->dead_mutex = NULL;
    return (0);
}