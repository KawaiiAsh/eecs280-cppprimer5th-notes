#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

int main(){
    string s("some string");
    for(auto it = s.begin(); it != s.end();it ++){
        if(isspace(*it)){
            continue;
        }
        *it = toupper(*it);
    }
    cout << s << endl;
    return 0;
}