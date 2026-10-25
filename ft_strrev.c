#include <unistd.h>

char *ft_strrev(char *str)
{
    int i;
    int a;
    int b;
    int c;
    i = 0;

    a = str[i - 1];
    
    while (str[i])
    {
        while (str[i - 1] != 0)
        {
            i--;
            write(1, &str[i], 1);
        }
        write(1, &str[i], 1);
        i++;
    }
    return (str);
}


int main (void)
{

    ft_strrev("Hello");
    return (0);
}