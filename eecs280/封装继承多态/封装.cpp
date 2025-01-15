#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string name;  // 动物名字
    int age;      // 动物年龄

public:
    // 构造
    Animal(const string& n,int a) : name(n),age(a){};

   // 设置和获取名字
    void setName(const string& n) { name = n; }
    string getName() const { return name; }

    // 设置和获取年龄
    void setAge(int a) { age = a; }
    int getAge() const { return age; }

    // 显示动物信息
    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // 虚函数：发出声音（让子类实现）
    virtual void makeSound() {
        cout << name << " makes a sound!" << endl;
    }
};

class Dog : public Animal{
public:
    // 使用基类的构造函数
    Dog(const string& n, int a) : Animal(n, a) {}

    // 重写 makeSound 方法
    void makeSound() override {
        cout << getName() << " says: Woof! Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    // 使用基类的构造函数
    Cat(const string& n, int a) : Animal(n, a) {}

    // 重写 makeSound 方法
    void makeSound() override {
        cout << getName() << " says: Meow! Meow!" << endl;
    }
};

int main(){
    // 创建具体的动物对象
    Dog dog("Buddy", 3);
    Cat cat("Kitty", 2);

    // 基类指针指向子类对象
    Animal* animal1 = &dog;
    Animal* animal2 = &cat;

    // 调用子类实现的 makeSound 方法
    animal1->makeSound();  // 输出：Buddy says: Woof! Woof!
    animal2->makeSound();  // 输出：Kitty says: Meow! Meow!

    // 展示信息
    animal1->displayInfo();  // 输出：Name: Buddy, Age: 3
    animal2->displayInfo();  // 输出：Name: Kitty, Age: 2
    
    return 0;
}