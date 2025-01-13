#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// O(n)
int forloop(int n){
    int res = 0;
    for(int i = 1; i <= n;i++){
        res += i;
    }
    return res;
}

// O(n)
int whileloop(int n){
    int res = 0;
    int i = 0;
    while(i <= n){
        res += i;
        i ++;
    }
    return res;
}

// O(n^2)
string nestedForLoop(int n){
    ostringstream res;
    for(int i = 0; i <= n;i++){
        for(int j = 1;j <= n;j++){
            res << "(" << i << ", " << j << "), ";
        }
    }
    return res.str();
}