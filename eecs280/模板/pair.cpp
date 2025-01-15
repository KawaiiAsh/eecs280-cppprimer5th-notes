#include <utility>
#include <string>
#include <iostream>

using namespace std;

pair<int, int> divideAndRemainder(int dividend, int divisor) {
    int quotient = dividend / divisor;
    int remainder = dividend % divisor;
    return make_pair(quotient, remainder);
}

int main() {
    pair<int, string> pair1(1, "Hello");
    cout << "First: " << pair1.first << ", Second: " << pair1.second << endl;


    int a = 10, b = 3;

    // 调用函数获取结果
    pair<int, int> result = divideAndRemainder(a, b);

    // 输出商和余数
    cout << "Quotient: " << result.first << endl;
    cout << "Remainder: " << result.second << endl;

    
    return 0;
}
