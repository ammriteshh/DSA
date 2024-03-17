#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int iniS = 0;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int i = 1; i <= n - i; i++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int i = 1; i <= n - i; i++)
        {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
    int iniS = 8;
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int i = 1; i <= i; i++)
        {
            cout << "*";
        }

        // spaces
        for (int j = 0; j < iniS; j++)
        {
            cout << " ";
        }
        // stars
        for (int i = 1; i <= i; i++)
        {
            cout << "*";
        }
        iniS += 2;
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