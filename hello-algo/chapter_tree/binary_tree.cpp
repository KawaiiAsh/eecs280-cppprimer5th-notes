#include <iostream>
using namespace std;

struct TreeNode{
    int val;          // 节点值
    TreeNode *left;   // 左子节点指针
    TreeNode *right;  // 右子节点指针

    TreeNode(int x) : val(x) ,left(nullptr),right(nullptr){};
};

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

    // 插入一个节点
    TreeNode *p = new TreeNode(0);
    // 在 n1 -> n2 中间插入节点 P
    p->left = n2;
    n1->left = p;

    // 输出验证树结构
    cout << "Root node: " << n1->val << endl;
    cout << "Left child of root (p): " << n1->left->val << endl;
    cout << "Left child of p (n2): " << n1->left->left->val << endl;
    return 0;
}