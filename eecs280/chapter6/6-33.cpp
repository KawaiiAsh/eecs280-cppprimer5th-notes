#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>::iterator beg,const vector<int>::iterator last){
    if(beg != last){
        cout << *beg << " ";
        beg++;
        printVector(beg,last);
    }
}

void printVecotrOtherWay(const vector<int> &v, size_t index){
    if(index == v.size()){
        return;
    }

    cout << v[index] << " ";
    printVecotrOtherWay(v,index+=1);
}

int main(){
    vector<int> veci = {1,2,3,4,5,6};
    auto beg = veci.begin();
    auto last = veci.end();
    printVector(beg,last);
    cout << endl;
    printVecotrOtherWay(veci,0);
    return 0;
}