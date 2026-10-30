#include <stdlib.h>

int *ft_realloc_array(int *arr, int old_size, int new_size)
{
    int *new_arr;
    int i;

    if (new_size <= 0)
    {
        return (NULL);
    }

    new_arr = malloc(sizeof(int) * new_size);
    if (new_arr == NULL)
    {
        return (NULL);
    }

    i = 0;
    while(i < old_size && i < new_size)
    {
        new_arr[i] = arr[i];
        i++;
    }

    while (i < new_size)
    {
        new_arr[i] = 0;
        i++;
    }

    free(arr);

    return (new_arr);
}