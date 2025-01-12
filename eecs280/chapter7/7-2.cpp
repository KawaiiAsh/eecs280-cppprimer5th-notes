#include <string>
using namespace std;

struct Sales_data{
    string bookNo;
    unsigned units_sold;
    double revenue = 0.0;

    string isbn(){
        return bookNo;
    }

    Sales_data& combine(const Sales_data &data){
        if(bookNo == data.bookNo){
            units_sold += data.units_sold;
            revenue += data.revenue; 
        }
        return *this;
    }

};
int main(){
    Sales_data book1{"12345", 10, 200.0}; // 初始化book1
    Sales_data book2{"12345", 5, 100.0};  // 初始化book2，与book1的bookNo相同
    Sales_data book3{"54321", 3, 60.0};   // 初始化book3，不同的bookNo.

    
    return 0;
}