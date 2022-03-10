//
// Created by zsomb on 3/10/2022.
//

#include "../../headers/array/user_array.h"

void createUserArray(UserArray **userArray, unsigned int maxUsers) {
    *userArray = malloc(sizeof(UserArray));
    if (!(*userArray)) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userArray)->users = (malloc(maxUsers * sizeof(User *)));
    if (!(*userArray)->users) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*userArray)->maxUsers = maxUsers;
}

void deleteUserArray(UserArray **userArray) {
    if (*userArray != NULL) {
        for (int i = 0; i < (*userArray)->maxUsers; ++i) {
            deleteUser(&(*userArray)->users[i]);
        }
        (*userArray)->maxUsers = 0;
        free((*userArray)->users);
        free((*userArray));
        *userArray=NULL;
    }
}
bool addNewUser(UserArray* userArray, User* newUser, int position){
    if(position<0 || position>= userArray->maxUsers){
        printf("Incorrect position");
        return  false;
    }
    userArray->users[position]=newUser;
    return true;
}
User* getUserAtPosition(UserArray* userArray, int position){
    if(position<0 || position>= userArray->maxUsers){
        printf("Incorrect position");
        return NULL;
    }
    return  userArray->users[position];
}
