#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void printValue(int value){
    cout << "Value is: " << value << endl;
}

int main(){
    vector<int> numbers = {1,2,3,4,5,6,7,8,9};
    for_each(numbers.begin(),numbers.end(),printValue);
    return 0;   
}