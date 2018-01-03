#include <stdio.h>


void zamien(int *pierwsza, int *druga);

int temp;

void zamien(int *pierwsza, int *druga)
{

    temp = *pierwsza;

    *pierwsza = *druga;

    *druga = temp;

}


int main()
{

    int Tomek = 35;

    int Asia = 27;

    int *wsk1 = &Tomek;

    int *wsk2 = &Asia;


    zamien(&Tomek, &Asia);

    printf("Wiek Asi to %d\n", Asia);

    printf("Wiek Tomka to %d\n", Tomek);

    return 0;
}