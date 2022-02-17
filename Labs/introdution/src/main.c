#include <stdio.h>
#include "function.h"

int main() {
    int a=7, b=9, c=11;
    printf("%i",sum(a,b));
    printf("\n");
    printf("%i",min(a,b,c));
    printf("\n");
    printf("%i",max(a,b,c));
    int *eletkor;
    int n=5;
    helyfoglalas(eletkor,n);
    random(eletkor,n);
    kiir(eletkor,n);
    return 0;
}
