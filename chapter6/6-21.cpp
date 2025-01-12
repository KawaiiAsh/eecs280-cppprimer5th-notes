#include <iostream>
using namespace std;

int compare(const int num1,const int *num2){
    if(num1 > *num2){
        return num1;
    }else if(num1 < *num2){
        return *num2;
    }else{
        return -1;
    }
}

int main(){
    int a = 20;
    int b = 20;
    int result = compare(a,&b);
    cout << result << endl;
    return 0;
}
