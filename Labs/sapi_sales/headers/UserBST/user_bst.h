//
// Created by zsomb on 5/5/2022.
//

#ifndef LABS_USER_BST_H
#define LABS_USER_BST_H

#include <stdbool.h>
#include "user.h"

typedef struct UserTreeNode{ User* info;
    struct UserTreeNode *left, *right;
} UserTreeNode;

void create(UserTreeNode** fa);
void insert(UserTreeNode**, User*);
bool search(UserTreeNode*, int);
void inorder(UserTreeNode*);
void preorder(UserTreeNode*);
void postorder(UserTreeNode*);
User* minimum(UserTreeNode*);
User* maximum(UserTreeNode*);
UserTreeNode* delete(UserTreeNode**, int);
void destroy(UserTreeNode**);
#endif //LABS_USER_BST_H
