#include <iostream>
using namespace std;

int main()
{
    int start = 0;
    int end = 0;
    cin >> start >> end;
    if(start < end){
        while (start <= end)
        {
            cout << start << endl;
            start++;
        }
    }else if(start > end){
        while (start >= end)
        {
            cout << start << endl;
            start--;
        }
    }else{
        cout << "Can't be = " << endl;
    }
    return 0;
}