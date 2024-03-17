#include<iostream>
#include<vector>
using namespace std;

void explainPairs() {
    pair<int, int> p1 = {1, 3};

    cout << p1.first <<" " << p1.second; //1 and 3

    pair<int, pair<int, int>> p2 = {1, {3, 4}};

    cout<< p2.first << " " << p2.second.second << " " << p2.second.first;  //1 << 4 << 3

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;  //5
}


