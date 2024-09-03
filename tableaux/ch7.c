
#include <stdio.h>

void swap(int *a, int *b)
{
    tmp = *a;
    *b = *a;
    *b = tmp;
}
void sort(int *l, int size)
{
    int i;

    i = 0;
    while (i < size - 1)
    {
        if (l(i) > )
    }
}

int main(void)
{
    int a;
    int i;
    int c;
    int k;
    int j;
    printf ("Enter how many elements you want in your array\n");
    scanf ("%d", &a);
    int s[a];

     while (i < a)
    {
        printf ("Enter your element\n");
        scanf ("%d", &s[i]);
        i++;

    }
    j = 0;
    k = 0;
    while (j < a)
    {
        while (k < a)
        {
            if (s[j] > s[k])
            {
                c = s[j];
                s[j] = s[k];
                s[k] = c;
            }
            k++;
        }
        j++;
    }
    i = 0;
     while (i < a)
    {
        printf ("%d", s[i]);
        i++;

    }
}