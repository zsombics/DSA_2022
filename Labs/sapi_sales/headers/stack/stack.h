//
// Created by zsomb on 4/7/2022.
//

#ifndef LABS_STACK_H
#define LABS_STACK_H
#include <stdlib.h>
#include <stdbool.h>
typedef struct{
    int maxsize;
    int sp;
    int *items;
}STACK;
void create(STACK**myStack, int capacity);
bool isEmpty(STACK *myStack);
bool isFull(STACK *myStack);
void push(STACK *myStack, int val);
void pop(STACK *myStack);
int top(STACK *myStack);
void delete(STACK **myStack);
#endif //LABS_STACK_H
