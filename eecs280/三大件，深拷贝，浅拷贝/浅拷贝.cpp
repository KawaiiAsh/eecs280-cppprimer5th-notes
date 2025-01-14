#include <iostream>
using namespace std;

class Person{
private:
    int age;

public:
    Person() = default;

    Person(int age_in):age(age_in){};

    void showAge(){
        cout << age << endl;
    }

};

int main(){
    Person p1(20);
    p1.showAge();
    return 0;
}