# Philosophers




## Pistes de résolutions




### 1. Structures

```

t_philosopher {
unsigned int  position;
unsigned int  left_fork;
unsigned int  right_fork;
unsigned int  last_meal;
}

t_data {
unsigned int  nb_philos;
unsigned int  time_to_die;
unsigned int  time_to_eat;
unsigned int  time_to_sleep;
unsigned int  nb_meals;
t_philosopher *philos;
pthread_mutex_t *forks;
pthread_mutex_t write;
pthread_mutex_t dead;
}

```


