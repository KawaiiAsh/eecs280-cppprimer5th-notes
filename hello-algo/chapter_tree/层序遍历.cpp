/**
 * 这个文件是讲关于二叉树的层序遍历
 * 用 queue 和 vector 去处理的
 * 是 BFS，广度优先
 */
#include <queue>
#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : val(value),left(nullptr),right(nullptr){};
};

// 层序遍历
vector<int> levelOrder(TreeNode *root){
    // 初始化队列，加入根节点
    queue<TreeNode *> queue;
    queue.push(root);
    // 初始化一个列表，用于保存遍历序列
    vector<int> vec;
    while(!queue.empty()){ // 如果队列不是空
        TreeNode *node = queue.front();
        queue.pop();
        vec.push_back(node->val);
        if(node->left != nullptr){
            queue.push(node->left); // 左节点入队
        }
        if(node->right != nullptr){
            queue.push(node->right); // 右节点入队
        }
    }

    return vec; 
}

// 我的方法
vector<int> myWay(TreeNode *root){
    if(!root) return {};

    vector<int> result;
    queue<TreeNode*> q;
    q.push(root);
    // -----------------------------
    while(!q.empty()){
        TreeNode *node = q.front();
        result.push_back(node->val);
        q.pop();

        if(node->left){
            q.push(node->left);
        }
        
        if(node->right){
            q.push(node->right);
        }
    }
    // -----------------------------

    return result;
}
int main(){

    TreeNode *n1 = new TreeNode(1);
    TreeNode *n2 = new TreeNode(2);
    TreeNode *n3 = new TreeNode(3);
    TreeNode *n4 = new TreeNode(4);
    TreeNode *n5 = new TreeNode(5);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;

    vector<int> numbers = levelOrder(n1);
    
    for(auto number : numbers){
        cout << number << " ";
    }

    cout << endl;
    return 0;
}