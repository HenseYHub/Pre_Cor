#include <stdlib.h>

int *ft_create_array(int size)
{
    int *arr;
    int i;

    if (size <= 0)
    {
        return (NULL);
    }

    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
    {
        return (NULL);
    }
    
    i = 0;

    while (i < size)
    {
        arr[i] = i;
        i++;
    }

    return (arr);

}