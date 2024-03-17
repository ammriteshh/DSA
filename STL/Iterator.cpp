#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> v = {20, 10, 15, 6, 7};

//{20,10,15,6,7}
vector<int>::iterator it = v.begin();  //decleration
//v.begin is pointing to the memory where the element(20) is 
it++;
cout << *(it) << " "; //6

it = it + 2;
cout << *(it) << " ";

//{10,20,30,40}

vector<int>::iterator it = v.end(); //v.end points to a memory location that is right after the last element

vector<int>::reverse_iterator it = v.rend(); //REVERSE END, reverse the array

vector<int>::reverse_iterator it = v.rbegin();  //REVERSE BEGIN

cout << v[0] << " " << v.at(0);

cout << v.back() << " ";//{10,20,30} the element is at 30

for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *(it) << " "; //print the entire vector
}

for (auto it = v.begin(); it != v.end(); it++){
    cout << *(it) << " "; //automatically assigns it to a vector iterator 
}

for ( auto it : v){
    cout << it << " "; //for each loop
}

//{10,20,12,23}
v.erase(v.begin()+1); //20 will erase

//{10,20,12,23,35}
v.erase(v.begin() + 2, v.begin() + 4); //{10,20,35}

}