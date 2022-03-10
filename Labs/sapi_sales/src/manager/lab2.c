//
// Created by zsomb on 2/24/2022.
//

#include "../../headers/manager/lab2.h"

void testUserFunctionalities(){
User *user1;
BirthDate data1={2003,10,12};
    createUser(&user1);
    setUserData(user1,"John Peterson",STUDENT,MALE,COMPUTER_SCIENCE,data1);
    printUser(user1);
    User *user2;
    BirthDate data2={2002,2,22};
    createUser(&user2);
    setUserData(user2,"CSEGEZI ZSOMBOR",STUDENT,MALE,ENGINEERING,data2);
    printUser(user2);
    BirthDate data3={2001,4,18};
    User *user3;
    createUser(&user3);
    setUserData(user3,"Arvai David",STUDENT,MALE,COMPUTER_SCIENCE,data3);
    printUser(user3);
}
void testProductFunctionalities(){
    Product* product1;
    createProduct(&product1);
    setProductData(product1,"Apple",FRUIT,10);
    printProduct(product1);
    Product* product2;
    createProduct(&product2);
    setProductData(product2,"Apple",FRUIT,9);
    printProduct(product2);
    Product* product3;
    createProduct(&product3);
    setProductData(product3,"Apple",FRUIT,6);
    printProduct(product3);
}
