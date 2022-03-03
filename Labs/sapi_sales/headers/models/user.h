//
// Created by zsomb on 2/24/2022.
//
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "constans.h"
#include "errors.h"
#ifndef LABS_USER_H
#define LABS_USER_H
enum UserType{
    STUDENT, TEACHER
};
enum GenderType{
    FEMALE, MALE
};
enum SpecializationType{
    INFORMATICS, COMPUTER_SCIENCE, TELECOMMUNICATION, AUTOMATION, ENGINEERING, GARDENING , COMMUNICATION,
    TRANSLATING
};
typedef  struct{
    unsigned int id;
    char name[30];
    enum UserType type;
    enum GenderType gender;
    enum  SpecializationType specialization;
    int birthYear;
}User;
char* getUserType(enum UserType type);
char* getGenderType(enum GenderType gender);
char* getSpecializationType(enum SpecializationType specialization);
void createUser(User **user);
void setUserData(User *user, char name[30], enum UserType type, enum GenderType gender,
        enum SpecializationType specialization, int birthYear);
void printUser(User *user);
void deleteUser(User **user);
#endif //LABS_USER_H
