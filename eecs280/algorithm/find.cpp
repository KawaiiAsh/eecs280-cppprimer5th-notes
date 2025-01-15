#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> results(numbers.size());

    auto it = find(numbers.begin(),numbers.end(),5);
    
    if (it != numbers.end()) {
        cout << "找到值: " << *it << endl;
    } else {
        cout << "值未找到" << endl;
    }

    return 0;
}