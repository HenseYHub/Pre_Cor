#include <stdlib.h>

int *ft_create_int(int value)
{
    int *ptr;

    ptr = malloc(sizeof(int));
    if (ptr == NULL)
    {
        return (NULL);
    }

    *ptr = value;

    return (ptr);
}  