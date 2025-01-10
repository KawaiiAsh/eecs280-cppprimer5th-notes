#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1;
    string s2(s1);
    string s3 = s1; // 等价于s2(s1);
    string s4("Hello");
    string s5 = "Hello";
    string s6(10,'W');

    cout << s6<<endl;
    return 0;
}