#include<iostream>
#include<vector>
using namespace std;

void explainVector() {

    vector<int> v; //VectorName<datatype> datatypename; (it creates an empty container)

    v.push_back(1); //pushback = add(insert), it inserts 1 in the empty container
    v.emplace_back(2); //emplaceback is similar to pushback, it inserts 2 so now the empty container becomes {1, 2}

    vector<pair<int, int>>vec; //vector of pair datatype

    // v.push_back({1, 2});  //must be in curly braces
    v.emplace_back(1, 2);  // no need of curly braces

    vector<int> v(5, 100); //{100,100,100,100,100}

    vector<int> v(5); //{0,0,0,0,0}, or garbage value

    vector<int> v1(5, 20);  //{20,20,20,20,20}
    vector<int> v2(v1); //copy of upper line

    
    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";
}