#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j <= i; j++)
        {

            if ((i + j) % 2 == 0)
            {

                cout << "1 ";
            }

            else if ((i + j) % 2 == 1)
            {

                cout << "0 ";
            }
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
