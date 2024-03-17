//Map stores unique keys in sorted order 
#include<iostream>
#include<map>
using namespace std;

void explainMap() {

    map<int, int> mpp;

    map<int, pair<int, int>> mpp;

    map< pair<int, int>, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);

    mpp.insert({2, 4});

    mpp(2,3) = 10;

    {
        {1,2};
        {2,4};
        {3,1};
    }

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);
}