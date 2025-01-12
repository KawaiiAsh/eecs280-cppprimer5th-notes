#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,4,534,53,5,43345,5,345,3,534,53,453,453,45,34,5};
    
    int *left = begin(arr);
    int *last = end(arr);

    for(int *p = left; p != last;++p){
        *p = 0;
    }

    for(auto e : arr){
        cout << e << " " << endl;
    }
    return 0;
}