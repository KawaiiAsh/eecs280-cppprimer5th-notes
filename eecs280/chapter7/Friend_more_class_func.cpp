#include <iostream>
using namespace std;

class CB;

class CA{
private:
    int a;
    int b;
public:

    CA(int a_in,int b_in) : a(a_in),b(b_in){};

    friend void add_a_and_b(const CA &ca, const CB &cb);


};

class CB{
private:
    int a;
    int b;
public:
    CB(int a_in,int b_in) : a(a_in),b(b_in){};

    friend void add_a_and_b(const CA &ca, const CB &cb);

};

void add_a_and_b(const CA &ca, const CB &cb){
    cout << ca.a + ca.b + cb.a + cb.b << endl;
}

int main(){
    CA ca(1,2);
    CB cb(3,4);
    add_a_and_b(ca,cb);

    return 0;
}