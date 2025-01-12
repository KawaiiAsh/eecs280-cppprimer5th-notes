#include <iostream>
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

    static Sales_data add(const Sales_data &lhs,const Sales_data &rhs){
        if(lhs.bookNo == rhs.bookNo){
            Sales_data result = rhs;
            result.combine(lhs);
            return result;
        }else{
            cerr << "error " << endl;
            return Sales_data();
        }
    }
    
    static istream &read(istream &is,Sales_data &sales_data){
        is >> sales_data.bookNo >> sales_data.units_sold >> sales_data.revenue;
        return is;
    }

    static ostream &print(ostream &os,Sales_data &sales_data){
        os << sales_data.bookNo << sales_data.units_sold << sales_data.revenue;
        return os;
    }
};

int main() {
    Sales_data book1;
    Sales_data book2;

    // 从输入流读取数据
    cout << "Enter book1 (format: bookNo units_sold revenue): ";
    Sales_data::read(cin, book1);
    cout << "Enter book2 (format: bookNo units_sold revenue): ";
    Sales_data::read(cin, book2);

    // 打印原始数据
    cout << "\nOriginal data:" << endl;
    Sales_data::print(cout, book1) << endl;
    Sales_data::print(cout, book2) << endl;

    // 合并数据
    cout << "\nAdding book1 and book2..." << endl;
    Sales_data result = Sales_data::add(book1, book2);

    // 打印合并后的结果
    cout << "Result: ";
    Sales_data::print(cout, result) << endl;

    return 0;
}
