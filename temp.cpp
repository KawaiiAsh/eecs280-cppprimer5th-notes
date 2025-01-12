#include <vector>
#include <array>
#include <iostream>
using namespace std;

int binarySearchVector(const vector<int> &v,const int target){
    auto left = v.begin();
    auto right = v.end();

    while(left != right){
        auto mid = left + (right - left) / 2;
        if(*mid == target){
            return mid - v.begin();
        }else if(target < *mid){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    
}

void binarySearchArray(const int arr[],const int SIZE){

}

int main(){

    return 0;
}