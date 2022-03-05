//
// Created by zsomb on 2/24/2022.
//
#include "product.h"

char* getProductType(enum ProductType type){
    switch (type) {
        case GROCERY:
            return "GROCERY";
        case FRUIT:
            return "FRUIT";
        case SCHOOL:
            return "SCHOOL";
        case OBJECT:
            return "OBJECT";
        default:
            return "Undefined";
    }
}

void createProduct(Product **product){
    *product = malloc( sizeof (Product));
    if(!(*product)){
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*product)->id = ++numberOfProducts;
}
void setProductData(Product *product, char *name, enum ProductType type,unsigned int amount){
    if(!product){
        printErrorMessage(NULL_POINTER_EXCEPTION);
    }
    strcpy(product->name, name);
    product->type=type;
    product->amount=amount;
    product->creationDate= time(NULL);
}
void printProduct(Product *product){
    printf("%i\n", product->id);
    printf("%s\n", product->name);
    printf("%s", getProductType(product->type));
    printf("%i\n", product->amount);
};



