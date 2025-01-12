#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
    string bookNo;
    unsigned units_sold = 0;
    double price = 0.0 ; 
    double revenue = 0.0;

    Sales_data() = default;

    Sales_data(const string &bookNo_in, unsigned units_sold_in, double price_in) 
    : bookNo(bookNo_in), 
    units_sold(units_sold_in),
    price(price_in),
    revenue(price_in * units_sold_in){};

    Sales_data(istream &is) {
        is >> bookNo >> units_sold >> price;
        revenue = units_sold * price;
    }
};

istream &operator>>(istream &is,Sales_data &sd){
    is >> sd.bookNo >> sd.price >> sd.units_sold;
    if(is){
        sd.revenue = sd.price * sd.units_sold;
    }else{
        sd = Sales_data();
    }
    return is;
}

ostream &operator<<(ostream &os, const Sales_data &sd) {
    os << "BookNo: " << sd.bookNo
       << ", Units Sold: " << sd.units_sold
       << ", Price: " << sd.price
       << ", Revenue: " << sd.revenue;
    return os;
}

int main(){

    cout << "Testing `read` with constructor:\n";
    cout << "Enter data for book1 (format: bookNo units_sold price): ";
    Sales_data book1(cin);  // 使用构造函数从输入流初始化
    cout << "Result of book1 initialization using constructor:\n";
    cout << book1 << endl;


    cout << "\nTesting `read` with `operator>>`:\n";
    Sales_data book2;
    cout << "Enter data for book2 (format: bookNo price units_sold): ";
    cin >> book2;  // 使用输入运算符重载
    cout << "Result of book2 initialization using `operator>>`:\n";
    cout << book2 << endl;

    return 0;
}