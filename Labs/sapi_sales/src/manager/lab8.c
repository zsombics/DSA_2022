//
// Created by zsomb on 4/9/2022.
//

#include "lab8.h"
#include "../../headers/queue/user_queue.h"

void testUserQueueFunctionalities(){
    UserQueue *userQueue;
    createUserQueue(&userQueue,MAX_QUEUE);
    User *user1;
    BirthDate data1={2008,5,12};
    createUser(&user1);
    setUserData(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE,data1);
    enqueue(userQueue,user1);
    User *user2;
    BirthDate data2={2002,2,22};
    createUser(&user2);
    setUserData(user2,"CSEGEZI ZSOMBOR",STUDENT,MALE,ENGINEERING,data2);
    enqueue(userQueue,user2);
    BirthDate data3={2001,4,18};
    User *user3;
    createUser(&user3);
    setUserData(user3,"Arvai David",STUDENT,MALE,COMPUTER_SCIENCE,data3);
    enqueue(userQueue,user3);
    printQueue(userQueue,"userQueue.txt");
    dequeue(userQueue);
   // printQueue(userQueue,"userQueue.txt");
    printf("%i",findElementInQueue(userQueue,3));
    deleteQueue(&userQueue);
}