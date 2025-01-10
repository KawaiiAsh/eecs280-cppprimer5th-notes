#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    while(getline(cin,word)){
        if(word == "break"){
            break;
        }
        
        for(auto &c : word){
            c = 'X';
        }

        cout << word<<endl;        
    }
    return 0;
}