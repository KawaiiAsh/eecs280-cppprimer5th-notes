/**
 * 本文件是讲诉关于 BST 二叉搜索树
 * 对于根节点，左子树中所有节点的值 < Root 节点 < 右子树中所有的值
 * 任意节点的左、右子树也是二叉搜索树
 */

#include <iostream>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value):val(value),left(nullptr),right(nullptr){};
};

// 查找某个节点
TreeNode *search(TreeNode *root,int num){
    TreeNode *cur = root;
    while(cur != nullptr){
        if(num < cur->val){
            cur = cur->left;
        }else if(num > cur->val){
            cur = cur->right;
        }else{
            break;
        }
    }
    return cur;
}