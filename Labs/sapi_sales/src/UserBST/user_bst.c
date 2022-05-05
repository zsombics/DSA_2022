//
// Created by zsomb on 5/5/2022.
//

#include "../../headers/UserBST/user_bst.h"
void create(UserTreeNode** fa){
    (*fa) = (UserTreeNode *)(malloc(sizeof(UserTreeNode)));
    if (!fa) {
        printf("Sikertelen lefoglalas");
    }
    (*fa)->right = NULL;
    (*fa)->left = NULL;
}
void insert(UserTreeNode** fa, User* adat)
{
    if ((*fa) == NULL){
        create(&(*fa));
        (*fa)->info = adat;
    }
    else{
        if((*fa)->info->id > adat->id){
            insert(&((*fa)->left), adat);
        }
        else{
            insert(&((*fa)->right), adat);
        }
    }
}
void inorder(UserTreeNode* fa ){
    if(fa->left)
        inorder(fa->left);
    printUser(fa->info);
    if(fa->right)
        inorder(fa->right);
}
void preorder(UserTreeNode* fa){
    printUser(fa->info);
    if(fa->left)
        preorder(fa->left);
    if(fa->right)
        preorder(fa->right);
}
void postorder(UserTreeNode* fa){
    if(fa->left)
        postorder(fa->left);
    if(fa->right)
        postorder(fa->right);
    printUser(fa->info);
}
