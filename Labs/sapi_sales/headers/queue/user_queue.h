//
// Created by zsomb on 4/7/2022.
//

#ifndef LABS_USER_QUEUE_H
#define LABS_USER_QUEUE_H

#include <stdbool.h>
#include "user.h"

typedef struct{
    int front;
    int rear;
    unsigned int size;
    User **users;
}UserQueue;
void createUserQueue(UserQueue **userQueue, unsigned int
maxSize);
bool queueIsEmpty(UserQueue *userQueue);
bool queueIsFull(UserQueue *userQueue);
void enqueue(UserQueue* userQueue,User *user);
void dequeue(UserQueue* userQueue);
int findElementInQueue(UserQueue* userQueue, int userId);
void printQueue(UserQueue* userQueue, char*destination);
void deleteQueue(UserQueue** userQueue);
#endif //LABS_USER_QUEUE_H
