#include <queue>
#include <iostream>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(2);
    q.push(5);
    q.push(4);

    int front = q.front();
    cout << front << endl;

    q.pop();

    front = q.front();
    cout << front << endl;

    /* 获取队列的长度 */
    int size = q.size();

    /* 判断队列是否为空 */
    bool empty = q.empty();

    cout << size << endl;
    cout << empty << endl;
    return 0;
}