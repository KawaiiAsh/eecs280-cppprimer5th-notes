#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> veci = {1,2,3,4,5,6,7,8,9,10};

    int target = 4;

    auto beg = veci.begin(), end = veci.end();
    auto mid = veci.begin() + (end - beg) / 2;
    while(mid != end && *mid != target ){
        if(target < *mid){
            end = mid; // 在前半部分
        }else{
            beg = mid +1; // 在mid后寻找
        }
        mid = beg + (end - beg) / 2;
    }
    return 0;
}