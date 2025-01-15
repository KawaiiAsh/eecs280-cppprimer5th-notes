#include <iostream>
using namespace std;

int main(){
    int x = 1;
    int *ptr = &x;
    cout << &x << endl; // X的地址
    cout << ptr << endl; // X的地址
    cout << &ptr << endl; // 指针自身的地址
    return 0;
}