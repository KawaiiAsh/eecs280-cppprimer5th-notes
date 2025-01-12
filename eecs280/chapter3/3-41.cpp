#include <vector>
#include <iostream>
#include <iterator>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};

    vector<int> veci(begin(arr),end(arr));

        for (const auto &elem : veci) {
        cout << elem << " ";
    }
    return 0;
}