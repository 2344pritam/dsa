#include<stdio.h>;
#include "tree_traversal.h"


//INORDER TRAVERSAL
void inorderTraversal(node* root){
    if(root == NULL)
    return;
    inorderTraversal(root->left);
    printf("%d->", root->data);
    inorderTraversal(root->right);
}
