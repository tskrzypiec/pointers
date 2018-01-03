#include <stdio.h>


int *daj(int *pierwsza, int *druga);

int max;

int *daj(int *pierwsza, int *druga)
{

    max = pierwsza;

    if (*druga < *pierwsza)
    {
        max = druga;
    }
    else
    {
        max = pierwsza;
    }

    return max;
}


int main()
{

    int Tomek = 35;

    int Asia = 27;

    int *wsk1 = &Tomek;

    int *wsk2 = &Asia;


    max = daj(&Tomek, &Asia);

    printf("wskaznik Asia = %d\n", &Asia);

    printf("max = %d\n", max);

    return 0;
}