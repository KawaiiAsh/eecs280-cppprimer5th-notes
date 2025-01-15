#include <iostream>
using namespace std;


template <class T>
class Box{
private:
    T value;

public:
    // 构造
    Box(T val) : value(val) {}

    T getValue(){
        return value;
    }
};

int main(){
    Box<int> intBox(10);
    cout << intBox.getValue();

    return 0;
}

