#include <iostream>
#include <string>
#include <iterator> // std::begin 和 std::end 需要这个头文件
using namespace std;

int main() {
    string arr[] = {"Hello", "World", "!"};
    string *beg = begin(arr); // 获取数组起始位置
    string *last = end(arr);   // 获取数组结束位置（末尾的下一个位置）

    for (string *ptr = beg; ptr != last; ++ptr) { // 遍历从 beg 到 end
        cout << *ptr << endl; // 输出当前指针指向的元素
    }

    return 0;
}
