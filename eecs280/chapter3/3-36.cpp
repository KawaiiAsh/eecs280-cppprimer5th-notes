#include <iostream>
#include <vector>
#include <array>
using namespace std;

// 比较两个数组是否相等
// 如果相等，返回0，否则返回-1
int compareTwoArray(const int *arr1,const int arr1_size,const int *arr2,const int arr2_size){
    // 先比较Size
    if(arr1_size != arr2_size){
        return -1;
    }

    const int *ptr1 = arr1; // ptr1是指向arr1的第一个元素
    const int *ptr2 = arr2; // ptr2是指向arr2的第一个元素

    for(auto itr = ptr1 ;itr != arr1 + arr1_size; itr++ , ptr2++){ // 用itr去代表ptr1，当itr 不是 arr里的最后一个的时候，itr和ptr2都++
        if(*itr != *ptr2){ // 要解引用对比
            return -1; // 如果不一样，就return -1
        }
    }

    return 0;

}

// 比较两个Vector是否相等
// 如果相等，返回0，否则返回-1
int compareTwoVector(const vector<int> *veci1, const vector<int> *veci2){
    // 先比较size
    if(veci1->size() != veci2->size()){
        return -1;
    }

    auto itr1 = veci1->begin();
    auto itr2 = veci2->begin();

    for(;itr1 != veci1->end();itr1++,itr2++){
        if(*itr1 != *itr2){
            return -1;
        }
    }
    return 0;
}

int main() {
    // 测试数组比较
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {1, 2, 3, 4, 6};

    cout << "Array comparison results:" << endl;
    cout << "arr1 vs arr2: " << compareTwoArray(arr1, 5, arr2, 5) << endl; // 输出 0
    cout << "arr1 vs arr3: " << compareTwoArray(arr1, 5, arr3, 5) << endl; // 输出 -1

    // 测试 Vector 比较
    vector<int> vec1 = {1, 2, 3, 4, 5};
    vector<int> vec2 = {1, 2, 3, 4, 5};
    vector<int> vec3 = {1, 2, 3, 4, 6};

    cout << "Vector comparison results:" << endl;
    cout << "vec1 vs vec2: " << compareTwoVector(&vec1, &vec2) << endl; // 输出 0
    cout << "vec1 vs vec3: " << compareTwoVector(&vec1, &vec3) << endl; // 输出 -1

    return 0;
}