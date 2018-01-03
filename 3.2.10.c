#include <stdio.h>


double daj_liczbe ();


double daj_liczbe ()
{
    double k = 10.42;
    double *temp = &k;


return *temp;
}


int main()
{
    double liczba;
    liczba = daj_liczbe();
    printf("liczba to %f\n", liczba);


    return 0;
}