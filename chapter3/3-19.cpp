#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    vector<int> veci_one = {42,42,42,42,42,42,42,42,42,42};
    vector<int> veci_two = veci_one;
    vector<int> veci_three(10,42);
    return 0;
}