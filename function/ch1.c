#include <stdio.h>

int sum(int a, int b)
{
    int sum;
    sum = a + b;
}

int main(void)
{
    int a;
    int b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("sum : %d\n", sum(a, b));
}