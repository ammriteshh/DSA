//LIFO = Last In First Out
#include <iostream>
#include <stack>
using namespace std;

void explainStack() {
    stack<int> st;

    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.push(5); //{5,3,3,2,1}

    cout << st.top() << endl; // prints 5

    st.pop(); // pop means delete
    // st now looks like {3,3,2,1}

    cout << st.top() << endl; // 3

    cout << st.size() << endl; // 4

    cout << st.empty() << endl; // false

    stack<int> st1, st2;
    st1.swap(st2);
}
int main() {
    explainStack();
    return 0;
}
