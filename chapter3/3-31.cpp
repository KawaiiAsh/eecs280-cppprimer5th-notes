#include <iostream>
#include <array>

using namespace std;

int main(){

    int arr[10];
    
    for(int i = 0; i < 10; i ++){
        arr[i] = i;
    }

    for(auto target : arr){
        cout << target << endl;
    }
    return 0;
}