#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 50 ; i<=100;i++){
      sum += i;
    }
    cout << sum << endl;

    for(int i = 10;i >= 0 ; i--){
        cout << i << endl;
    }

    int start = 0;
    int end = 0;
    cin >> start >> end;
    for(int i = start;i <= end; i++){
        cout << i << endl;
    }
    return 0;
}