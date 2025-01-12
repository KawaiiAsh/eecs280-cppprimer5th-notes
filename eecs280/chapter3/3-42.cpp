#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int arr[v.size()];

    for(int i = 0; i != v.size();i++){
        arr[i] = v[i];
    }

    for (auto i : arr) cout << i << " ";

    return 0;
}