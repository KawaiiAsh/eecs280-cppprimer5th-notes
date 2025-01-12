#include <iostream>
using namespace std;

int main(int argc,char *argv[]){

    string s = string(argv[1]) + string(argv[2]);

    cout << "Concatenated string: " << s << endl;

    return 0;
}