#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
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