//
// Created by zsomb on 2/24/2022.
//

#ifndef LABS_PRODUCT_H
#define LABS_PRODUCT_H

#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include "constans.h"
#include "errors.h"

enum ProductType{
    GROCERY, FRUIT, SCHOOL, OBJECT
};

typedef struct {
    unsigned int id;
    char name[20];
    enum ProductType type;
    unsigned int amount;
    time_t creationDate;
}Product;

char* getProductType(enum ProductType type);

Product* product(
        unsigned int id,
    char name[20],
    enum ProductType type,
    unsigned int amount);
void printProduct(Product* product);
void createProduct(Product **product);
void deleteProduct(Product **product);
void setProductData(Product *product, char *name, enum ProductType type,unsigned int amount);

#endif //LABS_PRODUCT_H
