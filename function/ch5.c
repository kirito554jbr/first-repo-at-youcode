#include <stdio.h>

int factorial(int x)
{
    unsigned int i;
    i = 1;
    while (x > 0)
    {
        i *= x;
        x--;
    }
    if (x <= 0)
        return (0);
    return (i);
}
int main(void)
{
    unsigned int x;
    printf("%d\n", factorial(0));
}