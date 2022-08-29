#include "philosophers.h"

int main(int argc, char **argv)
{
    t_data  data;
    
    if (init_data(&data, argc, argv))
        return (1);
    if (init_philosophers(&data))
        return (1);
    return (0);
}