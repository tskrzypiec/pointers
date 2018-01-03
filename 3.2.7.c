#include <stdio.h>


void zamien (int &a, int &b);


void zamien (int &a, int &b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

}


int main()
{

    int Tomek = 35;

    int Asia = 27;

    int *w = &Tomek;

    int *k = &Asia;

    zamien(Tomek,Asia);

    printf("Tomek ma lat %d\n", Tomek);
    printf("Asia ma lat %d\n", Asia);

    return 0;
}