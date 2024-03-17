#include <iostream>
#include <set>
using namespace std;

void explainSet() {
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}, the element 2 is not stored again because sets only store unique elements
    st.insert(4); // {1,2,4}
    st.insert(5); // {1,2,4,5}

    // {1,2,4,5}
    auto it = st.find(3); // it points to the end of the set because 3 is not in the set

    // {1,2,4,5}
    auto it2 = st.find(6); // it2 points to the end of the set because 6 is not in the set

    // {1,4,5}
    st.erase(5); // deletes the element 5

    int cnt = st.count(1); // If 1 exists in the set, cnt is 1; otherwise, it's 0

    // {1,2,4}
    auto it1 = st.find(2);
    auto it3 = st.find(4);
    st.erase(it1, it3); // deletes elements 2 and 4
}
