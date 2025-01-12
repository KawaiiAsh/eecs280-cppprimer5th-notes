#include <iostream>

int main(){
    int count = 50;
    int sum = 0;
    while(count <= 100){
        sum += count;
        count ++;
    }
    std::cout << sum << std::endl;
    return 0;
}