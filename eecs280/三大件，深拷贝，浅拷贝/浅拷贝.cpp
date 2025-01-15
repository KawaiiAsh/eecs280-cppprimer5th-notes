#include <iostream>
using namespace std;

class Person{
private:
    int age;

public:
    Person() = default;

    Person(int age_in):age(age_in){};


    // 编译器会自动生成拷贝构造函数
    Person(const Person &other) = default;
    // 编译器自动生成的赋值运算符
    Person& operator=(const Person& other) = default;

    void showAge(){
        cout << age << endl;
    }

};

int main(){
    Person p1(20);
    p1.showAge();
    Person p2(p1);
    p2.showAge(); // 编译器会自动生成浅拷贝
    Person p3 = p1; // // 编译器会自动生成赋值运算符
    p3.showAge(); 
    return 0;
}