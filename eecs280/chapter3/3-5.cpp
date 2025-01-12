#include <iostream>
using namespace std;

int main(){
    string word, new_word;
    while(cin >> new_word){
        if(new_word == "break"){
            break;
        }
        word += new_word + " ";
    }
    cout << word << endl;
    return 0;
}