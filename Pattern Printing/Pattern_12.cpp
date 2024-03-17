#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // numbers
        for (int j = 1; j <= i; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
// taking input
int main()
{
    int n;
    cin >> n;
    print1(n);
}