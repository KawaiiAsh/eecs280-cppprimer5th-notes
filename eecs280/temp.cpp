#include <iostream>
using namespace std;

struct square{
    int w;
    int h;

    square(int x,int y):w(x),h(y){}
};

int main(){
    square s1(1,1);
    square s2(2,2);
    s1 = s2;
    
    return 0;
}