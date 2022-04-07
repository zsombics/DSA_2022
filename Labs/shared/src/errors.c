//
// Created by zsomb on 2/24/2022.
//

#include "../headers/errors.h"

void printErrorMessage(enum ErrorType error) {
switch(error){
    case MEMORY_ALLOCATION:
        printf("Memory allocation");
    case FILE_NOT_FOUND:
        printf("File not found");
    case NULL_POINTER_EXCEPTION:
        printf("Null pointer exception");
    case QUEUE_IS_FULL:
        printf("Queue is full");
    case QUEUE_IS_EMPTY:
        printf("Queue is empty");
    default:
        printf("Underfined");
}
}
