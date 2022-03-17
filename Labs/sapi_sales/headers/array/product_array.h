//
// Created by zsomb on 3/10/2022.
//
#include <stdbool.h>
#include "product.h"
#ifndef LABS_PRODUCT_ARRAY_H
#define LABS_PRODUCT_ARRAY_H
typedef struct {
    Product ** products;
    unsigned int maxProducts;
}ProductArray;
void createProductArray(ProductArray **productArray, unsigned int maxProducts);
void deleteProductArray(ProductArray **productArray);
bool addNewProduct(ProductArray* productArray, Product * newProduct, int position);
Product * getProductAtPosition(ProductArray* productArray, int position);
#endif //LABS_PRODUCT_ARRAY_H
