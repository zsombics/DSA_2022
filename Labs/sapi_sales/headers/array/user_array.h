//
// Created by zsomb on 3/10/2022.
//
#include <stdbool.h>
#include "user.h"
#ifndef LABS_USER_ARRAY_H
#define LABS_USER_ARRAY_H
typedef struct {
    User** users;
    unsigned int maxUsers;
}UserArray;
void createUserArray(UserArray **userArray, unsigned int maxUsers);
void deleteUserArray(UserArray **userArray);
bool addNewUser(UserArray* userArray, User* newUser, int position);
User* getUserAtPosition(UserArray* userArray, int position);
#endif //LABS_USER_ARRAY_H
