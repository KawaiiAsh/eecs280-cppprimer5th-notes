#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main(){

    int arr[10];
    vector<int> veci;
    for(int i = 0; i < 10; i ++){
        arr[i] = i;
    }

    for(auto target : arr){
        cout << target << endl;
    }

    for(int i = 0;i < 10;i++){
        veci.push_back(i);
    }

    return 0;
}