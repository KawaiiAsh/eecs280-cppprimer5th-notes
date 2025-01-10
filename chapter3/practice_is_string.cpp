#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    // cin >> s;
    // cout << s << endl;

    string s2;
    // while(getline(cin,s2)){
    //     cout << s2 << endl;
    // }

    string s3;
    // while(getline(cin,s3)){
    //     if(s3.size() == 5){
    //         cout << s3 << endl;
    //     }
    // }

    string s4;
    while(getline(cin,s4)){
        if(s4.empty()){
            cout << "Program end" << endl;
            break;
        }
    }
    return 0;
}