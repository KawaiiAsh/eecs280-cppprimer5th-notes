#include <iostream>
#include <queue>
#include <functional>
using namespace std;

int main(){
    // Minheap
    priority_queue<int,vector<int>,greater<int>> min_heap;
    // Maxheap
    priority_queue<int, vector<int>,less<int>> max_heap;

    min_heap.push(10);
    min_heap.push(5);
    min_heap.push(20);

    cout << min_heap.top() << endl;  // 输出当前最小值
    

    // 向最大堆插入元素
    max_heap.push(10);
    max_heap.push(5);
    max_heap.push(20);

    cout << max_heap.top() << endl;

    cout << min_heap.size() << endl;

    return 0;
}