#include <vector>
#include <iostream>
using namespace std;
// using namespace std;

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

int mut(int a, int b){
    return a*b;
}

int division(int a,int b){
    return a/b;
}

int main(){
    vector<int (*)(int,int)> vec;
    vec.push_back(add);
    vec.push_back(sub);
    vec.push_back(mut);
    vec.push_back(division);

    for(auto v : vec){
        cout << v(1,1) << endl;
    }
    return 0;
}