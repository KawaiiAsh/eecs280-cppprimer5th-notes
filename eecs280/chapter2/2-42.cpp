#include <iostream>
#include <string>
#include "Sales_data.h"
using namespace std;

int main(){
    Sales_Data item1("SB",1,10.99);
    Sales_Data item2("sds",999,111.99);

    item1 = item2;
    cout << item1;
    return 0;
}