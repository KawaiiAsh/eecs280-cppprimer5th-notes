#include <iostream>
using namespace std;

class Box{
    private:
        double width;
        double length;

    public:
        Box(double w):width(w){};
        Box(double w,double l):width(w),length(l){};

        friend void printWidth(const Box &b);
        friend void printLength(const Box &b);
};

void printWidth(const Box &b){
    cout << "Width of the box: " << b.width << endl;
}

void printLength(const Box &b){
    cout << "Length of the box: " << b.length << endl;
}
int main() {
    Box box(10.5);
    printWidth(box); // 调用友元函数

    Box box2(10.5,20);
    printLength(box2); // 调用友元函数

    return 0;
}