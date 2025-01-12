#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1 = "Helloworld";
    for(auto c : s1){
        cout << c << " ";
    }

    for(auto &c : s1){
        c = 'X';
    }

    for(auto c : s1){
        cout << c << " ";
    }
    return 0;
}