//
// Created by zsomb on 4/7/2022.
//

#include "../../headers/Stack/stack.h"
#include "functions.h"

void create(STACK **myStack, int capacity) {
    (*myStack) = malloc(sizeof(STACK));
    //test
    (*myStack)->items = (malloc(capacity * sizeof(int*)));
    //test
    (*myStack)->maxsize=capacity;
    for(int i=0;i<capacity;i++)
    {
        (*myStack)->items[i]=(int)malloc(sizeof (int));
    }
    //test
    (*myStack)->sp = -1;
}

bool isEmpty(STACK *myStack) {
    if (myStack != NULL)
        return myStack->sp == -1;
}

bool isFull(STACK *myStack) {
    if (myStack != NULL)
        return myStack->sp == myStack->maxsize-1;
}

void push(STACK *myStack, int val) {
    if (!isFull(myStack)){
        myStack->sp++;
        myStack->items[myStack->sp] = val;
    }
}

void pop(STACK *myStack) {
    if(!isEmpty(myStack))
        myStack->items[myStack->sp] = NULL;
    myStack->sp--;
}

int top(STACK *myStack) {
    if(!isEmpty(myStack))
    {return myStack->items[myStack->sp];}
}

void delete(STACK **myStack){
    //helyfelszabaditas
}