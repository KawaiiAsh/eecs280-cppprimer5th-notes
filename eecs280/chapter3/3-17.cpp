#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;
int main(){
    vector<string> vecs;
    string word;
    while(getline(cin,word)){
        if(word == "break"){
            break;
        }
        vecs.push_back(word);
    }

    for(auto &w : vecs){
        for(auto &c : w){
            if(islower(c)){
                c = toupper(c);
            }
        }
    }

    for(auto word: vecs){
        cout << word << " ";
    }
    return 0;
}