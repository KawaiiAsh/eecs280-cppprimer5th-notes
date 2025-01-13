#include <iostream>

using namespace std;

class Example{
public:
    static int a;
    // static int a = 10; 非法

};

int Example::a = 10;

int main(){
    cout << Example::a << endl;
    return 0;
}