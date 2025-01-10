#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> veci = {1,2,3,4,5,6,7,8,9};
    for(auto itr = veci.begin();itr != veci.end();itr++){
        cout << *itr << ", ";
    }
    return 0;
}