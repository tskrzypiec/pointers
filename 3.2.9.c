#include <stdio.h>


int daj_liczbe ();


int daj_liczbe ()
{
    int k = 10;
    int *temp = &k;


return *temp;
}


int main()
{
    int liczba;
    liczba = daj_liczbe();
    printf("liczba to %d\n", liczba);


    return 0;
}