#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    cout << *(v.begin()) << endl;
    cout << *(v.begin()+1) << endl;
    return 0;
}