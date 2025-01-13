#include <iostream>
using namespace std;

int randomAccess(int *nums,int size){
    int randomIndex = rand() % size;
    int randomNum = nums[randomIndex];
    return randomNum;
}

void insert(int *nums,int size,int num,int index){
    for(int i = size - 1; i > index;i --){
        nums[i] = nums[i-1];
    }
    nums[index] = num;
}

void remove(int *nums,int size,int index){
    for(int i = index; i < size -1; i ++){
        nums[i] = nums[i + 1];
    }
}

void traverse(int *nums, int size) {
    int count = 0;
    // 通过索引遍历数组
    for (int i = 0; i < size; i++) {
        count += nums[i];
    }
}

int find(int *nums, int size, int target) {
    for(int i = 0; i < size;i  ++){
        if(nums[i] == target){
            return i;
        }
    }
    return -1;
}

/* 扩展数组长度 */
int *extend(int *nums, int size, int enlarge) {
    int *res = new int[size+enlarge];
    for(int i = 0;i < size; i ++){
        res[i] = nums[i];
    }
    delete[] nums;
    return res;
}
    
int main(){
    /* 初始化数组 */
    // 存储在栈上
    int arr[5];
    int nums[5] = { 1, 3, 2, 5, 4 };

    int* arr1 = new int[5];
    int* nums1 = new int[5] { 1, 3, 2, 5, 4 };

    int* nums2 = new int[5] {1,3,4,5};
    insert(nums2,5,2,1);
    for(int i = 0;i < 5; i ++){
        cout << nums2[i] << ",";
    }
    return 0;
}