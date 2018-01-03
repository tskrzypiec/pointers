#include <stdio.h>


int daj_wsk_na_blok (int blok);


int daj_wsk_na_blok (int blok)
{
    int k [blok];
    k[0]=12;
    int *temp = k;


return *temp;
}


int main()
{
    int liczba;
    liczba = daj_wsk_na_blok(8);
    printf("liczba to %d\n", liczba);


    return 0;
}