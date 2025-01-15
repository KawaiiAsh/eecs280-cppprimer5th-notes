#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 拼接列表
template <class T>
void addVector(vector<T> &lhs, const vector<T> &rhs){
    lhs.insert(lhs.end(),rhs.begin(),rhs.end());
}

// 遍历元素
int traves(vector<int> v){
    int count = 0;
    for(auto &val : v){
        count += val;
    }

    return count;
}

// 排序列表
void sortlist(vector<int> &v){
    sort(v.begin(),v.end());
}

int main(){
    vector<int> nums = { 1, 3, 2, 5, 4 };

    nums.insert(nums.begin() + 3, 6);
    nums.erase(nums.begin() + 3);      // 删除索引 3 处的元素
    return 0;
}
