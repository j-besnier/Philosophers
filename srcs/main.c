#include "philosophers.h"

int main(int argc, char **argv)
{
    t_data  *data;
    unsigned int n;

    n = 0;
    if (argc < 4 || argc > 5)
    {
        printf("%s\n", ERR_ARGNB);
        return (1);
    }
}