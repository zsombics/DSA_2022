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
        default: return "UNDEFINED";
    }
}

void createUser(User **user) {
    (*user)=malloc(sizeof (User));
    if(!(*user)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
  //  (*user)->id=
}

