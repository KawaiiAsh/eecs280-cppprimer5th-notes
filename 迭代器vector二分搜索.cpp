/**
 * 给定一个 Vector int，升序排序
 * 用迭代器 + 二分查找做
 * 如果查找到 Target，return index，否则返回 -1
 */
#include <iostream>
#include <vector>
using namespace std;

int binarySearchVectorValue(vector<int> veci,int target){
    auto beg = veci.begin();
    auto end = veci.end();
    
    while(beg != end){
        // 计算中间位置
        auto mid = beg + (end - beg) / 2;
        // 如果target 等于中间
        if(target == *mid){
            return mid - veci.begin(); // 返回中间的index
        }else if(target < *mid){ // 如果target在左边
            end = mid;
        }else // 如果target在右边
        {
            beg = mid + 1;
        }
        
    }
    return -1;
}
int main(){
    vector<int> veci = {1,2,3,4,5,6,7,8,9,10};

    return 0;
}