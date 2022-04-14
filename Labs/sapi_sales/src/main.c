#include <lab_manager.h>
#include "../headers/list/user_list.h"

//
// Created by zsomb on 2/24/2022.
//
int main(){
UserNode *userNode;
    User *user1;
    BirthDate data1={2008,5,12};
    createUser(&user1);
    setUserData(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE,data1);
    createUserNode(&userNode,user1);
    User *user2;
    BirthDate data2={2002,2,22};
    createUser(&user2);
    setUserData(user2,"CSEGEZI ZSOMBOR",STUDENT,MALE,ENGINEERING,data2);
    insertFirst(&userNode,user2);

    BirthDate data3={2001,4,18};
    User *user3;
    createUser(&user3);
    setUserData(user3,"Arvai David",STUDENT,MALE,COMPUTER_SCIENCE,data3);
    insertLast(userNode,user3);
    deleteUserList(&userNode);
    printUserList(userNode,"CON");
}
