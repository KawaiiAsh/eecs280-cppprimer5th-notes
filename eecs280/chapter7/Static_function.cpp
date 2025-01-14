#include <iostream>
using namespace std;

class Dog{
public:
    static void speak(){
        cout << "wow wow wow" << endl;
    }
};

class Cat{
public:
    void speak(){
        cout << "miao miao miao " << endl;
    }
};

int main(){
    Dog::speak();
    // Cat::speak(); // 非法
    return 0;
}