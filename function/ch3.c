#include <stdio.h>

int max(int a, int b)
{
    int max;
    if(a > b)
        return (a);
    else if (a < b)
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

    printf("max : %d\n", max(a, b));
}