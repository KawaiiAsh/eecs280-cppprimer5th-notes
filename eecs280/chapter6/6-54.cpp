#include<iostream>
#include<vector>
using namespace std;

int add(int a,int b){
    return a+b;
}

int main(){
    vector<int (*)(int,int)> functionPointer;
    functionPointer.push_back(add);

    return 0;
}