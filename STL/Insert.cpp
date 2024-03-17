#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){

vector<int> v;

vector<int>v(2, 100); //{100,100}
v.insert(v.begin(), 300); //{300,100,100}
v.insert(v.begin() + 1, 2, 10); //{300,10,10,100,100}

vector<int> copy(2, 50); //{50,50}
v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}

//{10,20}
cout << v.size(); // 2

//{10,20}
v.pop_back(); //{10}

vector<int> v1, v2;
//v1 -> {10,20}
//v2 -> {30,40}
v1.swap(v2); //v1->{30,40} v2->{10,20}

v.clear(); //erase the entire vector

cout << v.empty(); //if it empty,then, True otherwise False
}