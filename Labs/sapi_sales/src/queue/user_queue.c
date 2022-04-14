//
// Created by zsomb on 4/7/2022.
//

#include "../../headers/queue/user_queue.h"
void createUserQueue(UserQueue **userQueue, unsigned int maxSize){
    (*userQueue) = malloc(sizeof(UserQueue));
    //test
    (*userQueue)->users = (malloc(maxSize * sizeof(User *)));
    //test
    (*userQueue)->size=maxSize;
    for(int i=0;i<maxSize;i++)
    {
        (*userQueue)->users[i]=malloc(sizeof (User));
        (*userQueue)->users[i]->id=++numberOfQueue;
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
        if(queueIsEmpty(userQueue)) userQueue->front++;
    userQueue->rear++;
    setUserData(userQueue->users[userQueue->rear],user->name,
                user->type,user->gender,user->specialization,user->birthDate);
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
int findElementInQueue(UserQueue* userQueue,unsigned int userId){
    for (int i = userQueue->front; i <= userQueue->rear; ++i) {
        if(userQueue->users[i]->id==userId) {
            return userQueue->users[i]->id;
        }
    }
    return -1;
}
void printQueue(UserQueue* userQueue, char*destination){
    if(!freopen(destination, "w", stdout)){
        printErrorMessage(FILE_NOT_FOUND);
    }
    else {
        printf("Queue: \n");
        for (int i = userQueue->front; i <= userQueue->rear; ++i) {
            printf("%i. user:\n", userQueue->users[i]->id);
            printf("Name: %s\n", userQueue->users[i]->name);
            printf("Type: %s ", getUserType(userQueue->users[i]->type));
            printf("Gender: %s ", getGenderType(userQueue->users[i]->gender));
            printf("Specialization: %s ", getSpecializationType(userQueue->users[i]->specialization));
            printf("Date: %4i/%2i/%2i\n\n", userQueue->users[i]->birthDate.year, userQueue->users[i]->birthDate.month, userQueue->users[i]->birthDate.day);
        }
    }
    freopen(CON,"w",stdout);
}
void deleteQueue(UserQueue** userQueue){

       free((*userQueue)->users);

}