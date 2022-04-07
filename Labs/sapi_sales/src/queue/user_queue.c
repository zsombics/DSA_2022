//
// Created by zsomb on 4/7/2022.
//

#include "../../headers/queue/user_queue.h"
void createUserQueue(UserQueue **userQueue, unsigned int maxSize){
    (*userQueue) = malloc(sizeof(UserQueue));
    //test
    (*userQueue)->users = (malloc(maxSize * sizeof(int*)));
    //test
    (*userQueue)->size=maxSize;
    for(int i=0;i<maxSize;i++)
    {
        (*userQueue)->users[i]=(int)malloc(sizeof (int));
    }
    (*userQueue)->front = -1;
    (*userQueue)->rear = -1;
}
bool queueIsEmpty(UserQueue *userQueue){
    if(userQueue->rear==-1) return true;
    else return false;
}
bool queueIsFull(UserQueue *userQueue){
    if(userQueue->rear==userQueue->size-1) return true;
    else return false;
}
void enqueue(UserQueue* userQueue,User *user){
    if(!queueIsFull(userQueue)){
        if(!queueIsEmpty(userQueue)) userQueue->front++;
    userQueue->rear++;
    userQueue->users[userQueue->rear]=user;
    }
    else printErrorMessage(QUEUE_IS_FULL);
}
void dequeue(UserQueue* userQueue){
    if(!queueIsEmpty(userQueue)){
        userQueue->users[userQueue->front]=NULL;
        userQueue->front++;
    }
    else printErrorMessage(QUEUE_IS_EMPTY);
}
int findElementInQueue(UserQueue* userQueue, int userId){
    for (int i = userQueue->front; i <= userQueue->rear; ++i) {
        if(userQueue->users[i]->id==userId) return userQueue->users[i];
    }
}
void printQueue(UserQueue* userQueue, char*destination){

}