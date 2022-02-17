//
// Created by zsomb on 2/17/2022.
//

#include <malloc.h>
#include <stdio.h>
#include <time.h>
#include "../headers/function.h"
int sum(int a, int b){
    int sum=a+b;
    return sum;
}

int max(int a, int b, int c){
    int max;
    if(a>b) if(a>c) max=a;
             else max=c;
    else if(b>c) max=b;
         else max=c;
         return max;
}
int min(int a, int b, int c){
    int min;
    if(a<b) if(a<c) min=a;
        else min=c;
    else if(b<c) min=b;
    else min=c;
    return min;
}
void helyfoglalas(int *eletkor, int n) {
    eletkor = (int *) malloc(n * sizeof(int));
    if (eletkor == NULL) {
        printf("Error");
        exit(-1);
    }
}
void random(int *eletkor, int n){
    srand(time(NULL));
    for (int i = 0; i < n; ++i){
        eletkor[i]=rand();
    }
}
void kiir(float *eletkor, int n) {
    for (int i = 0; i < n; ++i)
        printf("i", eletkor[i]);
    printf("\n");
}