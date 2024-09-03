#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int i;
    int j;
    i = 0;
    printf ("Enter how many elements you want in your array\n");
    scanf("%d", &a);
    int s[a];
    

    while (i < a)
    {
        printf ("Enter your element\n");
        scanf ("%d", &s[i]);
        i++;

    }
    j = 0;
    b = 0;
    while (j < a)
    {
        b += s[j];
        j++;
    }
    printf ("%d\n", b);
}