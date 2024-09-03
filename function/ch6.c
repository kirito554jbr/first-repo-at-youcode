#include <stdio.h>

int fibonacci(int x)
{
    if (x < 0) 
        return (x);
    if (x == 1)
        return (1);
    if (x == 0)
        return (0);
    else
    return (fibonacci(x - 1) + fibonacci(x - 2));
}
int main(void)
{
    printf("%d\n", fibonacci(5));
}
