//
// Created by zsomb on 2/24/2022.
//
#include <stdio.h>
#ifndef LABS_ERRORS_H
#define LABS_ERRORS_H
enum ErrorType{
    MEMORY_ALLOCATION, FILE_NOT_FOUND, NULL_POINTER_EXCEPTION,QUEUE_IS_FULL,QUEUE_IS_EMPTY
};
void printErrorMessage(enum ErrorType error);
#endif //LABS_ERRORS_H
