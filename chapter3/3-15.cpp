#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    string word;
    vector<string> vecs;
    while(getline(cin,word)){
        if(word == "break")
            break;
        vecs.push_back(word);
    }

    for(auto s : vecs){
        cout << s << " " << endl;
    }
    return 0;
}