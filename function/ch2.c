#include <stdio.h>

int mul(int a , int b)
{
  int mul;
  mul = a * b;
}

int main(void)
{
    int a;
    int b;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("multiplication : %d\n", mul(a, b));
}