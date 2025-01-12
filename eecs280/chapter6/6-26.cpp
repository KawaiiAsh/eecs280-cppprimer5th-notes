#include <iostream>
#include <string>
using namespace std;

int main(int argc,char *argv[]){
    // argc: 表示命令行参数的个数
    // argv: 表示指向参数字符串的指针数组
    cout << "Number of argc: " << argc << endl;

    for (int i = 0; i < argc; ++i) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    cout << "Let's go to plus!" << endl;
    cout << "first argc " << argv[1] << endl;
    cout << "second argc " << argv[2] << endl;
    int result =  stoi(argv[1]) + stoi(argv[2]);
    cout << result << endl;

    return 0;
}