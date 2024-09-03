#include <stdio.h>

int min(int a, int b)
{
    int max;
    if(a < b)
        return (a);
    else if (a > b)
        return (b);
}
int main(void)
{
    int a;
    int b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("min : %d\n", min(a, b));
}