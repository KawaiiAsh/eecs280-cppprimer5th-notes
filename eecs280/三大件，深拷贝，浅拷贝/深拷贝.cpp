#include <iostream>
using namespace std;

class Person{
private:
    int age;
    int *height;
public:
    // 默认构造
    Person() = default;

    // 有参构造
    Person(int age_in,int height_in) : age(age_in),height(new int(height_in)){};

    // 深拷贝
    Person(const Person &other) {
        age = other.age;
        height = new int(*other.height);
    }

    // 析构函数
    ~Person(){
        delete this->height;
    }

        // 打印成员信息
    void print() const {
        cout << "Age: " << age << ", Height: " << *height << endl;
    }

};

int main(){
    // 创建一个 Person 对象
    Person p1(25, 175);
    p1.print(); // 输出：Age: 25, Height: 175

    // 创建另一个 Person 对象
    Person p2(p1);
    p2.print();
    return 0;
}