#include <stdio.h>

int main(void)
{
    int a;
    int min;
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
    min = s[0];
    while (j < a)
    {
        if (min >= s[j])
            min = s[j];
        j++;
    }
    printf ("min: %d\n", min);
}