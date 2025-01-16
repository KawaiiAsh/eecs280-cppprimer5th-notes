#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value):val(value),left(nullptr),right(nullptr){};
};

// 前序递归遍历二叉树
// 根左右
void preOrder(TreeNode* root){
    if(!root) return;

    cout << root->val << endl;
    preOrder(root->left);
    preOrder(root->right);
}

// 左根右
void inOrder(TreeNode* root){
    if(!root) return;

    inOrder(root->left);
    cout << root->val << endl;
    inOrder(root->right);
}

// 左右根
void postOrder(TreeNode* root){
    if(!root) return;

    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << endl;
}