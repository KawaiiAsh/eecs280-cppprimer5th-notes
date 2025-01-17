#include <vector>
#include <iostream>
using namespace std;

int binarySearch(vector<int> &nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;
        if(nums[mid] < target){
            // 在右边
            left = mid + 1;
        }else if(nums[mid] > target){
            // 在左边
            right = mid - 1;
        }else{
            // 等于，欧皇
            return mid;
        }
    }

    return -1;
}

int main() {
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 5;
    
    int result = binarySearch(nums, target);
    if (result != -1) {
        cout << "Target found at index: " << result << endl;
    } else {
        cout << "Target not found" << endl;
    }

    return 0;
}
