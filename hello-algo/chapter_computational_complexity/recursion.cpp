#include <iostream>
#include <stack>
using namespace std;

// 来计算范围(1,n)的和
// 如果 n 是 1，那么范围是(0,1)，就是返回1
// 如果 n > 1，那么范围是 (1, n)，结果是 1 + 2 + 3 + ... + n
// 线性递归 ，时间复杂度 O(n)
int recur(int n){
    if( n == 1){
        return 1;
    }
    int res = recur(n-1); // 对 n-1 调用 recur，计算小于 n 的和

    return n+res;
}

// 尾递归
int tailRecur(int n,int res){
    if(n == 0){
        return res;
    }

    return tailRecur(n - 1,res + n);
}

// 递归树
int fib(int n){
    // 停止条件 f(1) = 0， f(2) = 1
    if(n == 1 || n == 2){
        return n - 1;
    }

    // 递归调用
    int res = fib(n - 1) + fib(n - 2);
    return res;
}

/* 使用迭代模拟递归 */
int forLoopRecur(int n) {
    // 使用一个显式的栈来模拟系统调用栈
    stack<int> stack;
    int res = 0;
    // 递：递归调用
    for (int i = n; i > 0; i--) {
        // 通过“入栈操作”模拟“递”
        stack.push(i);
    }
    // 归：返回结果
    while (!stack.empty()) {
        // 通过“出栈操作”模拟“归”
        res += stack.top();
        stack.pop();
    }
    // res = 1+2+3+...+n
    return res;
}