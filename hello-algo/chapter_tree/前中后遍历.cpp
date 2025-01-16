#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) : val(value),left(nullptr),right(nullptr){};
};

/* 前序遍历 */
void preOrder(TreeNode *root,vector<int> &result){
    if(!root) return ;

    result.push_back(root->val);
    // 访问优先级：根节点 -> 左子树 -> 右子树
    preOrder(root->left,result);
    preOrder(root->right,result);
}

/* 中序遍历 */
void inOrder(TreeNode *root,vector<int> &result){
    if(!root) return ;

    // 访问优先级：左子树 -> 根节点 -> 右子树
    inOrder(root->left,result);
    result.push_back(root->val);
    inOrder(root->right,result);
}

/* 后序遍历 */
void postOrder(TreeNode *root,vector<int> &result){
    if(!root) return;

    // 访问优先级：左子树 -> 右子树 -> 根节点
    postOrder(root->left,result);
    postOrder(root->right,result);
    result.push_back(root->val);
} 
int main(){

    return 0;
}