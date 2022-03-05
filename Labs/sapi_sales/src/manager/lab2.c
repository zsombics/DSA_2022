//
// Created by zsomb on 2/24/2022.
//

#include "../../headers/manager/lab2.h"

void testUserFunctionalities(){
User *user1;
    createUser(&user1);
    setUserData(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE,2003);
    printUser(user1);
}
void testProductFunctionalities(){
    Product* product1;
    createProduct(&product1);
    setProductData(product1,"Apple",FRUIT,10);
    printProduct(product1);
}
