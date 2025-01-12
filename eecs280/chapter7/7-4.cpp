#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person{
    string name;
    string address;
    vector<string> address_list = {address};

    Person(const string &name_in, const string &address_in)
        : name(name_in), address(address_in), address_list{address_in} {}

    void add_address(const string &address_in){
        address_list.push_back(address_in);
    }

    // 打印地址列表
    void print_addresses() const {
        cout << "Addresses of " << name << ":\n";
        for (const auto &addr : address_list) {
            cout << "- " << addr << endl;
        }
    }
};

int main(){
    Person p1("Ash", "142-01 41st ave");

    // 添加更多地址
    p1.add_address("201 Broadway");
    p1.add_address("902 Lincoln St");

    // 打印地址列表
    p1.print_addresses();
    
    return 0;
}