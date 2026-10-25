
char *ft_strrev(char *str)
{
    int i;
    int j;
    char temp;

    i = 0;
    j = 0;

    while(str[j])
    {
        j++;
    }
    j--;

    while(i < j)
    {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
    i++;
    j--;
    }


    return (str);
}

#include <stdio.h>
int main(void)
{
    char str[] = "Hello";
    char str1[] = "tytytytyt";
    char str2[] = "What`s up>?";
    char str3[] = "Pasha";
    
    printf("%s\n", ft_strrev(str));
    printf("%s\n", ft_strrev(str1));
    printf("%s\n", ft_strrev(str2));
    printf("%s\n", ft_strrev(str3));


    return (0);
}