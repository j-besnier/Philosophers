#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <limits.h>

# define ERR_ARGNB "Invalid number of arguments"

typedef struct s_philosopher {
    unsigned int  position;
    unsigned int  left_fork;
    unsigned int  right_fork;
    unsigned int  last_meal;
} t_philosopher;

typedef struct s_data {
    unsigned int  nb_philos;
    unsigned int  time_to_die;
    unsigned int  time_to_eat;
    unsigned int  time_to_sleep;
    unsigned int  nb_meals;
    t_philosopher *philos;
    pthread_mutex_t *forks;
    pthread_mutex_t write;
    pthread_mutex_t dead;
} t_data;


int ft_atoui(char *str, unsigned int *n);






#endif