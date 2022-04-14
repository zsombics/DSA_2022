//
// Created by zsomb on 4/14/2022.
//

#ifndef LABS_USER_LIST_H
#define LABS_USER_LIST_H

#include "user.h"

typedef struct UserNode {
    User* userValue;
    struct UserNode* next;
}UserNode;
void createUserNode(UserNode** userNode, User* userValue);
void printUserList(UserNode* userNode, char* destination);
int findElementInList(UserNode* userNode, int userId);
void insertFirst(UserNode** userNode, User* userValue);
void insertLast(UserNode *p, User* userValue);
User* removeFirst(UserNode** userNode);
User* removeLast(UserNode* userNode);
void deleteUserList(UserNode** userNode);
#endif //LABS_USER_LIST_H
