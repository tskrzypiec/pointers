#include <stdio.h>


void przypisz(int n, int *w);


void przypisz(int n, int *w)
{

 *w=n;

}


int main()
{

    int n = 35;

    int k;

    int *w = &k;


    przypisz(n,&k);

    printf("w =%d\n", k);

    return 0;
}