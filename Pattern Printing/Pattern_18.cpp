#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
// taking input
int main()
{
    int n;
    cin >> n;
    print1(n);
}