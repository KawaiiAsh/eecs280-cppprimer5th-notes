#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> veci;
    int i;
    while(cin >> i ){
        if(i == 99999){
            break;
        }
        veci.push_back(i);
    }

    if (veci.size() < 2) {
        cout << "Not enough elements to perform addition!" << endl;
        return 0;
    }

    for(int i = 0; i < veci.size() - 1 ;i ++){
        cout << "veci [" << i << "] is " << veci[i] << " + veci [" << i+1 << "] is " << veci[i+1] << " = " << veci[i] + veci[i+1] << endl;
    }

    for(int start = 0,end = veci.size() - 1; start < end; start++,end--){
        cout << "veci[" << start << "] + veci[" << end << "] = " << veci[start] + veci[end] << endl;
    }
    return 0;
}