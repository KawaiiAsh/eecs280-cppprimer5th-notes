#include <iostream>
using namespace std;

void print(int *a){
    cout << *a << endl;
}

int main(){
    int i = 0;
    int j[] = {0,1};

    print(&i);
    print(j);
    print(j+1);
    
    return 0;
}