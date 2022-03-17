//
// Created by zsomb on 3/10/2022.
//

#include "../../headers/array/product_array.h"
void createProductArray(ProductArray **productArray, unsigned int maxProducts) {
    *productArray = malloc(sizeof(ProductArray));
    if (!(*productArray)) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*productArray)->products = (malloc(maxProducts * sizeof(Product *)));
    if (!(*productArray)->products) {
        printErrorMessage(MEMORY_ALLOCATION);
    }
    (*productArray)->maxProducts = maxProducts;
}

void deleteProductArray(ProductArray **productArray) {
    if (*productArray != NULL) {
        for (int i = 0; i < (*productArray)->maxProducts; ++i) {
            deleteProduct(&(*productArray)->products[i]);
        }
        (*productArray)->maxProducts = 0;
        free((*productArray)->products);
        free((*productArray));
        *productArray=NULL;
    }
}
bool addNewProduct(ProductArray* productArray, Product* newProduct, int position){
    if(position<0 || position >= productArray->maxProducts){
        printf("Incorrect position");
        return  false;
    }
    productArray->products[position]=newProduct;
    return true;
}
Product * getProductAtPosition(ProductArray* productArray, int position){
    if(position<0 || position >= productArray->maxProducts){
        printf("Incorrect position");
        return NULL;
    }
    return  productArray->products[position];
}