#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> veci;

    // 填充 vector
    for (int i = 0; i <= 100; i++) {
        veci.push_back(i);
    }

    // 打印 vector 中的内容
    for (auto c : veci) {
        cout << c << endl;
    }

    return 0;
}
