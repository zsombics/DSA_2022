//
// Created by zsomb on 4/14/2022.
//

#include "../../headers/list/user_list.h"
void createUserNode(UserNode** userNode, User* userValue){
    (*userNode)=malloc(sizeof(UserNode));
    if(!(*userNode)){
        printErrorMessage(MEMORY_ALLOCATION);
   }
    else {
        (*userNode)->userValue=userValue;
        (*userNode)->next=NULL;
    }
}
void printUserList(UserNode* userNode, char* destination){
    if(!freopen(destination, "w", stdout)){
        printErrorMessage(FILE_NOT_FOUND);
    }
    UserNode *p=userNode;
    while (p!=NULL){
        printUser(p->userValue);
        p=p->next;
    }
    freopen(CON,"w",stdout);
}
void insertFirst(UserNode** userNode, User* userValue) {
    UserNode * newUserNode;
    createUserNode(&newUserNode,userValue);
    newUserNode->next=(*userNode);
    (*userNode)=newUserNode;
}
void insertLast(UserNode *p, User* userValue){
    UserNode * newUserNode;
    createUserNode(&newUserNode,userValue);
    UserNode *pp=p;
    while (pp->next != NULL){
        pp=pp->next;
    }
    pp->next=newUserNode;
}
User* removeFirst(UserNode** userNode){
    (*userNode)->userValue=NULL;
    (*userNode)=(*userNode)->next;
}
User* removeLast(UserNode* userNode){
    UserNode *pp=userNode;
    while (pp->next->next != NULL){
        pp=pp->next;
    }
    pp->next=NULL;
}
int findElementInList(UserNode* userNode, int userId){
    UserNode *pp=userNode;
    int k=0;
    while (pp->next!= NULL){
        if(pp->userValue->id==userId){
            ++k;
            return k;
        }
        ++k;
    }
    return -1;
}
void deleteUserList(UserNode** userNode){
    UserNode *p=userNode;
    while (p->next!=NULL){
       deleteUser(p);
        p=p->next;
    }
    p->userValue=NULL;
}