#include<iostream>
#include<set>
using namespace std;

void explainMultiSet() {
    //only stores duplicate elements also

    multiset<int>ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}

    ms.erase(1); //all 1's erase

    int cnt = ms.count(1);

    ms.erase(ms.find(1));  //only a single one erased
}

int main() {
    explainMultiSet();
    return 0;
}