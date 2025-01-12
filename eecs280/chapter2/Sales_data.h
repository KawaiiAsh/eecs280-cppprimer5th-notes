#include <iostream>
#include <string>

using namespace std;

class Sales_Data{
public:

private:
    string isbn;
    unsigned int sold_number = 0;
    double price = 0.0;
public:
    // 空参构造
    Sales_Data(){

    }

    // 有惨构造
    Sales_Data(string isbn_in,int sold_number_in, double price_in) : isbn(isbn_in),sold_number(sold_number_in),price(price_in){
        cout << "Construct got call" << endl;
    }

    // 析构函数
    ~Sales_Data(){
        cout << "Destructor got call" << endl;
    }

    // 获取ISBN号
    string get_isbn() const {
        return isbn;
    }
    
    // 获取sold_number
    unsigned int get_sold_number() const {
        return sold_number;
    }

    // 获取单价;
    double get_price() const {
        return price;
    }

    // 设置 ISBN
    void set_isbn(const string& isbn_in) {
        isbn = isbn_in;
    }

    // 设置销售数量
    void set_sold_number(unsigned int sold_number_in) {
        sold_number = sold_number_in;
    }

    // 设置单价
    void set_price(double price_in) {
        price = price_in;
    }

    Sales_Data operator+(const Sales_Data &data) const{
        if(isbn == data.isbn){
            return Sales_Data(isbn, sold_number + data.sold_number, price);
        }else{
            cout << "isbn number not correct" << endl;
        }
    }

    Sales_Data &operator=(const Sales_Data &rhs){
        if(this != &rhs) {
            isbn = rhs.isbn;
            sold_number = rhs.sold_number;
            price = rhs.price;
        }
        return *this;
    }
};

// 重载cout
ostream& operator<<(ostream &os,const Sales_Data &data){
    os << "ISBN is " << data.get_isbn() << " Sold number is: " << data.get_sold_number() << " Price is: " << data.get_price();
    return os;
}

istream& operator>>(istream &is,Sales_Data &data){
    string isbn;
    unsigned int sold_number;
    double price;

    is >> isbn >> sold_number >> price;

    if(is){
        data.set_isbn(isbn);
        data.set_sold_number(sold_number);
        data.set_price(price);
    }else{
        data = Sales_Data();
    }
    return is;
}

