#include <stack>
#include <iostream>

using namespace std;

int main(){
    // 初始化 stack
    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    int size = stack.size();
    int top = stack.top();
    cout << top << endl;
    cout << size << endl;

    stack.pop();

    top = stack.top();
    cout << top << endl;
    size = stack.size();
    cout << size << endl;

    bool empty = stack.empty();
    cout << empty << endl;
    return 0;
}