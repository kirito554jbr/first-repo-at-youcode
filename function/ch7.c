#include <stdio.h>

char *rev(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i > 0)
    {
        printf ("%s\n", str[i]);
        i--;
    }
        return (str);
    }

int main(void)
{
    char str[5] = "aymen";
    printf ("%s\n", rev(str));
}