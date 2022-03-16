//
// Created by zsomb on 2/24/2022.
//

#include <user.h>

char *getUserType(enum UserType type) {
    switch (type) {
        case STUDENT:
            return "STUDENT";
        case TEACHER:
            return "TEACHER";
        default: return "UNDEFINED";
    }
}

char *getGenderType(enum GenderType gender) {
    switch (gender) {
        case FEMALE:
            return  "FEMALE";
        case MALE:
            return "MALE";
        default: return "UNDEFINED";
    }
}

char *getSpecializationType(enum SpecializationType specialization) {
    switch (specialization) {
        case INFORMATICS:
            return "INFORMATICS";
        case COMPUTER_SCIENCE:
            return "COMPUTER SCIENCE";
        case TELECOMMUNICATION:
            return "TELECOMMUNICATION";
        case AUTOMATION:
            return "AUTOMATION";
        case ENGINEERING:
            return "ENGINEERING";
        case GARDENING:
            return "ENGINEERING";
        case COMMUNICATION:
            return "COMMUNICATION";
        case TRANSLATING :
            return "TRANSLATING";
        default: return "UNDEFINED";
    }
}

void createUser(User **user) {
    (*user)=malloc(sizeof (User));
    if(!(*user)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
  (*user)->id=++numberOfUsers;
}

void setUserData(User *user, char *name, enum UserType type, enum GenderType gender, enum SpecializationType specialization,
                 BirthDate birthDate) {
strcpy(user->name,name);
user->type=type;
user->gender=gender;
user->specialization=specialization;
user->birthDate=birthDate;
}
void printUser(User *user){
    printf("%i\n", user->id);
    printf("%s\n", user->name);
    printf("%s", getUserType(user->type));
    printf("%s", getGenderType(user->gender));
    printf("%s", getSpecializationType(user->specialization));
    printf("%4i/%2i/%2i\n", user->birthDate.year, user->birthDate.month, user->birthDate.day);
};

void deleteUser(User **user){
    free(*user);
    (*user)=NULL;
}

