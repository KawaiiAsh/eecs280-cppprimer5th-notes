#include <iostream>
#include "Sales_item.h"
using namespace std;

int main(){
    Sales_item currItem,item;
    if( cin >> currItem){
        int cnt = 1;
        while(cin >> item){
            if(item.isbn() == currItem){
                ++cnt;
            }else{
                cout << currItem << " occurs " << cnt << " times " << endl;
                currItem = item;
                cnt = 1;
            }
        }
        cout << currItem << " occurs " << cnt << " times " << endl;
    }

    return 0;
}