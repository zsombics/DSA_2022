#include <stdio.h>
#include "function.h"

int main() {
    int a=7, b=9;
    printf("%i",sum(a,b));
    return 0;
}
int sum(int a, int b){
    int sum=a+b;
    return sum;
}