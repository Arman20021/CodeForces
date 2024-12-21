#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "I hate it";
         
    }
    else{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i != n)
        {
            cout << "I hate that ";
        }
        if (i % 2 == 0 && i != n)
        { 
            cout << "I love that ";
        }
        if (i == n & i % 2 != 0)
        {
            cout << "I hate it ";
        }
        if (i == n & i % 2 == 0)
        {
            cout << "I love it ";
        }
    }
    }

    return 0;
}