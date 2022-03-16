//
// Created by zsomb on 3/13/2022.
//

#include <user_array.h>
#include <product.h>
#include "lab4.h"

void testUserArrayFunctionalities(){
    UserArray *userArray;
    createUserArray(&userArray,MAX_USERS);
    readUsers(userArray,FILE_IN_USERS_PRODUCTS);
}
void readUsers(UserArray *userArray, char *from){
    if(!freopen(from,"r",stdin))exit(-1);
    int nrOfUsers;
    scanf("%i\n",&nrOfUsers);
    for(int i=0; i<nrOfUsers;++i){
        User* newUser;
        createUser(&newUser);
        scanf("%[^\n]",newUser->name);
        scanf("%i",&newUser->type);
        scanf("%i",&newUser->specialization);
        scanf("%i",&newUser->gender);
        scanf("%i%i%i\n",&newUser->birthDate.year,&newUser->birthDate.month,&newUser->birthDate.day);
    readUserProducts(newUser);
        addNewUser(userArray,newUser,i);
    }
    freopen(CON,"r",stdin);
}
void printUsers(UserArray *userArray, char *destination){
    freopen(destination,"w",stdin);
    printf("All users:\n");
    for (int i = 0; i < userArray->maxUsers; ++i) {
        if(userArray->users[i]!=NULL){
            printUser(userArray->users[i]);
        }
    }
    freopen(CON,"w",stdin);
}
void readUserProducts(User *user){
    int nrOfProducts;
    scanf("%i\n",&nrOfProducts);
    for (int i = 0; i < nrOfProducts; ++i) {
        Product *newProduct;
        createProduct(&newProduct);
        scanf("%[^\n]"
              "%i"
              "%i\n",
              &newProduct->name,
              &newProduct->type,
              &newProduct->amount);
        addNewProductToUser(user,newProduct,i);
    }
}