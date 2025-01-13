#include <iostream>
using namespace std;

class Complex{
private:
    double real;
    double imag;
public:
    Complex(double r,double i) : real(r),imag(i){};

    friend Complex operator+(const Complex& c1, const Complex& c2);
    friend ostream& operator<<(ostream &os,const Complex& c);

    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(const Complex& c1, const Complex& c2){
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

ostream& operator<<(ostream& os, const Complex& c) {
    os << c.real << " + " << c.imag << "i";
    return os;
}

