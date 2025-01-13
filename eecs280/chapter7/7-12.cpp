#include <iostream>
#include <string>
using namespace std;

struct Sales_data{
    string bookNo;
    unsigned units_sold = 0;
    double price = 0.0 ; 
    double revenue = 0.0;

    Sales_data() = default;

    Sales_data(string b, unsigned us,double p) : bookNo(b),units_sold(us),price(p),revenue(us*p){}

    Sales_data(istream &is){
        is >> bookNo >> units_sold >> price;
        revenue = units_sold * price;    
    }
};
