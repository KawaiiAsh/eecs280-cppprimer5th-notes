#include <unordered_map>
#include <iostream>
using namespace std;

// 遍历键值对
void travesKeyValue(const unordered_map<int,string> map){
    for(auto m : map){
        cout << "Key is: " << m.first << " Value is: " << m.second << endl;
    }
}

// 用迭代器也可以遍历键值对
void travesKeyValueWithItr(const unordered_map<int,string> map){
    for(auto itr = map.begin();itr != map.end();itr++){
        cout << "Key is: " << itr->first << " Value is: " << itr->second << endl;
    }
}

int main(){
    unordered_map<int,string> map;
    map[10086] = "Ash";
    map[0101] = "Water";
    map[6666] = "Nice";
    map[56666] = "WoW";
    map[308] = "David Tao";

    // string name = map[10086];
    // cout << name << endl;

    // map.erase(10086);

    travesKeyValue(map);
    travesKeyValueWithItr(map);
    return 0;
}