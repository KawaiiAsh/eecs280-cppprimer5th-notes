#include <iostream>
using namespace std;

class Box;

class Display{
public:
    void showBoxWidth(const Box &b);
};

class Box{
private:
    double width;
public:
    Box(double w) : width(w) {}

    friend class Display;
};

void Display::showBoxWidth(const Box &b){
    cout << b.width << endl;
}

int main() {
    Box box(15.2);
    Display display;
    display.showBoxWidth(box);
    return 0;
}